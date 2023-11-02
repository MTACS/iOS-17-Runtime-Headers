
@interface FCArticleLengthFeature : FCPersonalizationFeature {
    NSString * _lengthID;
}

@property (nonatomic, retain) NSString *lengthID;

+ (id)longLengthFeature;
+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;

- (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)init;
- (id)initWithLengthIdentifier:(id)arg1;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)lengthID;
- (void)setLengthID:(id)arg1;

@end
