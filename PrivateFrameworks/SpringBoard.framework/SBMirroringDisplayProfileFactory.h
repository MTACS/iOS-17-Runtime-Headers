
@interface SBMirroringDisplayProfileFactory : NSObject <EXBDisplayProfileDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createProfile;
- (bool)displayProfile:(id)arg1 shouldConnectToDisplay:(id)arg2;

@end
