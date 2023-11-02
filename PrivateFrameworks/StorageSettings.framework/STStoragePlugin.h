
@interface STStoragePlugin : NSObject {
    NSString * _identifier;
    NSArray * _tips;
}

@property (retain) NSString *identifier;
@property (retain) NSArray *tips;

- (void).cxx_destruct;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)arg1;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)arg1;
- (id)identifier;
- (void)notifyUsageChanged;
- (void)reloadSpecifiersForApp:(id)arg1;
- (void)reloadTips;
- (void)setIdentifier:(id)arg1;
- (void)setTips:(id)arg1;
- (id)tips;

@end
