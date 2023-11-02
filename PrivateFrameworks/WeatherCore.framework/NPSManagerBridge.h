
@interface NPSManagerBridge : NSObject {
    NPSManager * _npsManager;
}

@property (nonatomic, readonly) NPSManager *npsManager;

- (void).cxx_destruct;
- (id)init;
- (id)npsManager;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4;

@end
