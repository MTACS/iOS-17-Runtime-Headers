
@interface FCNonDestructivePrivateDataMigrationHandler : NSObject {
    <FCNonDestructivePrivateDataActionProvider> * _privateDataActionProvider;
    NSArray * _privateDataControllers;
    bool  _privateDataSyncingEnabled;
}

@property (nonatomic, retain) <FCNonDestructivePrivateDataActionProvider> *privateDataActionProvider;
@property (nonatomic, copy) NSArray *privateDataControllers;
@property (getter=isPrivateDataSyncingEnabled, nonatomic) bool privateDataSyncingEnabled;

- (void).cxx_destruct;
- (void)handleMigrationWithPrivateDataDirectory:(id)arg1;
- (id)init;
- (id)initWithPrivateDataActionProvider:(id)arg1 privateDataControllers:(id)arg2 privateDataSyncingEnabled:(bool)arg3;
- (bool)isPrivateDataSyncingEnabled;
- (id)privateDataActionProvider;
- (id)privateDataControllers;
- (void)setPrivateDataActionProvider:(id)arg1;
- (void)setPrivateDataControllers:(id)arg1;
- (void)setPrivateDataSyncingEnabled:(bool)arg1;

@end
