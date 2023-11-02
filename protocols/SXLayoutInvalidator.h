
@protocol SXLayoutInvalidator <NSObject>

@required

- (void)cancelPendingInvalidationForComponent:(id <SXComponent>)arg1;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 state:(id <SXComponentState>)arg2;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 state:(id <SXComponentState>)arg2 priority:(unsigned long long)arg3;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 state:(id <SXComponentState>)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 state:(id <SXComponentState>)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3 priority:(unsigned long long)arg4;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 suggestedSize:(struct CGSize { double x1; double x2; })arg2;
- (NFPromise *)invalidateComponent:(id <SXComponent>)arg1 suggestedSize:(struct CGSize { double x1; double x2; })arg2 priority:(unsigned long long)arg3;
- (void)mightInvalidateComponent:(id <SXComponent>)arg1;

@end
