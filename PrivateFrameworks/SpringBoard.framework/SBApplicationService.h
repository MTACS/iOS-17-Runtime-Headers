
@interface SBApplicationService : NSObject <SBApplicationServerMiscDelegate> {
    SBApplicationController * _applicationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithApplicationController:(id)arg1;
- (void)applicationServer:(id)arg1 client:(id)arg2 deleteSnapshotsForApplicationIdentifier:(id)arg3;

@end
