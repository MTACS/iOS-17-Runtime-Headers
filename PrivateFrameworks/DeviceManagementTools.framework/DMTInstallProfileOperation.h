
@interface DMTInstallProfileOperation : CATOperation {
    <DMTProfileInstallationPrimitives> * _primitives;
    NSData * _profileData;
    NSObject<OS_dispatch_queue> * _profileInstallationQueue;
}

@property (nonatomic, readonly) <DMTProfileInstallationPrimitives> *primitives;
@property (nonatomic, readonly, copy) NSData *profileData;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *profileInstallationQueue;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProfileInstallationPrimitives:(id)arg1 profileData:(id)arg2;
- (void)installProfile;
- (bool)isAsynchronous;
- (void)main;
- (id)primitives;
- (id)profileData;
- (id)profileInstallationQueue;

@end
