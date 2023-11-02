
@interface AAUIServerHookHandlerDelegate : NSObject <RUIServerHookHandlerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)serverHookHandler:(id)arg1 isUserCancelError:(id)arg2;

@end
