
@interface AMUISelectedConfigurations : NSObject {
    NSDate * _lastUpdateDate;
    NSDate * _lastUseDate;
    NSMutableDictionary * _selections;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, retain) NSDate *lastUseDate;
@property (nonatomic, copy) NSMutableDictionary *selections;

+ (id)lastUpdatedDateFromDictionaryRepresentation:(id)arg1;
+ (id)lastUsedDateFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastSelectedConfigurationUUIDForProviderBundleIdentifier:(id)arg1;
- (id)lastUpdateDate;
- (id)lastUseDate;
- (id)selections;
- (void)setLastSelectedConfigurationUUID:(id)arg1 forProviderBundleIdentifier:(id)arg2;
- (void)setLastUpdateDate:(id)arg1;
- (void)setLastUseDate:(id)arg1;
- (void)setSelections:(id)arg1;

@end
