
@interface WFAdjustDateAction : WFAction

- (void)finishWithInput:(id)arg1 dateTransform:(id /* block */)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)transformDate:(id)arg1 operation:(unsigned long long)arg2;

@end
