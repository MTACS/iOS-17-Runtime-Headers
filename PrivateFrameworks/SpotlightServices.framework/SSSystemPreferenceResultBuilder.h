
@interface SSSystemPreferenceResultBuilder : SSResultBuilder {
    NSString * _bundleId;
    NSString * _name;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *name;

+ (bool)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)bundleId;
- (id)initWithResult:(id)arg1;
- (id)name;
- (void)setBundleId:(id)arg1;
- (void)setName:(id)arg1;

@end
