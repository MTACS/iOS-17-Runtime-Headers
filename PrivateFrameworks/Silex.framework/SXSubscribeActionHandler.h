
@interface SXSubscribeActionHandler : NSObject <SXSubscribeActionHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleSubscribeActionOnPresenter:(id)arg1 completionBlock:(id /* block */)arg2;

@end
