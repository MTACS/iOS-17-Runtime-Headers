
@protocol TSUResourceRequestObserver <NSObject>

@required

- (void)resourceRequestDidPerformResourceAccess:(id <TSUResourceRequest>)arg1 error:(NSError *)arg2;
- (void)resourceRequestWillPerformResourceAccess:(id <TSUResourceRequest>)arg1;

@end
