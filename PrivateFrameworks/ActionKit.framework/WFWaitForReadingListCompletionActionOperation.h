
@interface WFWaitForReadingListCompletionActionOperation : NSObject <WFActionExtendedOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCompletionHandlerIfRunning:(id /* block */)arg1;
- (void)cancel;

@end
