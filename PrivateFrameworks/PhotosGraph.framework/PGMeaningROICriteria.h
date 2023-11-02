
@interface PGMeaningROICriteria : NSObject <PGMeaningCriteria> {
    unsigned long long  _minimumNumberOfROIs;
    NSArray * _negativeROIs;
    NSArray * _positiveROIs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long minimumNumberOfROIs;
@property (nonatomic, retain) NSArray *negativeROIs;
@property (nonatomic, retain) NSArray *positiveROIs;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)isValid;
- (unsigned long long)minimumNumberOfROIs;
- (id)negativeROIs;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (id)positiveROIs;
- (void)setMinimumNumberOfROIs:(unsigned long long)arg1;
- (void)setNegativeROIs:(id)arg1;
- (void)setPositiveROIs:(id)arg1;

@end
