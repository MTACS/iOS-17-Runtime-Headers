
@interface PBFPosterPair : NSObject {
    void associatedConfiguration;
    void configuration;
    void configuredProperties;
    void id;
    void ignoreNotifyingForProvisionalHomeScreenConfigurationChange;
    void localizedTitle;
    void observers;
    void provisionalHomeScreenConfiguration;
}

@property (nonatomic, readonly) NSUUID *configurationUUID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)configurationUUID;
- (id)description;
- (id)init;
- (id)initWithConfiguration:(id)arg1 associatedConfiguration:(id)arg2;
- (id)localizedTitle;
- (void)setLocalizedTitle:(id)arg1;

@end
