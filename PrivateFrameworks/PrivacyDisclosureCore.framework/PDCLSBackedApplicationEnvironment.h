
@interface PDCLSBackedApplicationEnvironment : NSObject <PDCApplicationEnvironment> {
    LSApplicationWorkspace * _workspace;
}

@property (nonatomic, readonly, copy) NSEnumerator *allApplications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allApplications;
- (id)applicationIdentityForIdentityString:(id)arg1;
- (id)applicationRecordForBundleIdentifier:(id)arg1;
- (id)init;
- (id)monitorAppEventsWithDelegate:(id)arg1 onQueue:(id)arg2;

@end
