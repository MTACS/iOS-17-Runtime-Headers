
@interface PGMeaningPublicEventCriteria : NSObject <PGMeaningCriteria> {
    NSString * _publicEventCategory;
    NSString * _publicEventCategoryNameString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *publicEventCategory;
@property (nonatomic, retain) NSString *publicEventCategoryNameString;
@property (readonly) Class superclass;

+ (id)_publicEventCategoryForPublicEventCategoryName:(id)arg1;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)isValid;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (id)publicEventCategory;
- (id)publicEventCategoryNameString;
- (void)setPublicEventCategory:(id)arg1;
- (void)setPublicEventCategoryNameString:(id)arg1;

@end
