
@interface BKSWorkspace : NSObject <RBSServiceDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)init;
- (void)service:(id)arg1 didLoseInheritances:(id)arg2;
- (void)service:(id)arg1 didReceiveInheritances:(id)arg2;

@end
