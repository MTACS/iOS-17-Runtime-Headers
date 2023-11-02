
@interface FCPersonalizationFeature : NSObject <NSCopying> {
    NSString * _fc_description;
    NSString * _personalizationIdentifier;
    bool  _shouldBeBoosted;
    NSString * _tagID;
}

@property (nonatomic, readonly) NSString *fc_description;
@property (nonatomic, readonly) NSString *personalizationIdentifier;
@property (nonatomic) bool shouldBeBoosted;
@property (nonatomic, readonly) NSString *tagID;

+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureFromTagID:(id)arg1;
+ (id)featureObserver;
+ (id)featuresFromIssue:(id)arg1;
+ (id)featuresFromPersonalizingItem:(id)arg1 personalizationTreatment:(id)arg2;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fc_description;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)personalizationIdentifier;
- (void)setShouldBeBoosted:(bool)arg1;
- (bool)shouldBeBoosted;
- (id)tagID;

@end
