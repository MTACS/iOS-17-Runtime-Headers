
@interface CNUIContactStoreSaveDelegate : NSObject <CNSaveRequestDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)saveRequest:(id)arg1 shouldProceedAfterError:(id)arg2;

@end
