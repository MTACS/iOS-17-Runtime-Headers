
@interface CloudSettingsService : NSObject <CloudSettingsServiceProtocol> {
    NSString * _identifier;
    <CloudSettingsMediator> * _mediator;
    CloudSettingsStore * _store;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) <CloudSettingsMediator> *mediator;
@property (nonatomic, retain) CloudSettingsStore *store;

- (void).cxx_destruct;
- (void)applyCloudSettingsToDevice:(id)arg1 forStore:(id)arg2;
- (id)identifier;
- (id)initWithStoreIdentifier:(id)arg1 settingsMediator:(id)arg2;
- (id)mediator;
- (void)performFirstTimeSetupForStore:(id)arg1;
- (void)performFirstTimeSetupForStore:(id)arg1 newDevice:(bool)arg2;
- (void)performSmartMergeWithStoreSettings:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMediator:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)writeToCloudSettings:(id)arg1 forStore:(id)arg2;
- (void)writeToCloudSettingsDict:(id)arg1 forStore:(id)arg2;

@end
