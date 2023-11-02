
@interface PGMeaningPOICriteria : NSObject <PGMeaningCriteria> {
    double  _maximumParkDiameter;
    unsigned long long  _minimumNumberOfPOIs;
    bool  _mustBeSpecial;
    NSArray * _negativePOIs;
    NSArray * _positivePOIs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumParkDiameter;
@property (nonatomic) unsigned long long minimumNumberOfPOIs;
@property (nonatomic) bool mustBeSpecial;
@property (nonatomic, retain) NSArray *negativePOIs;
@property (nonatomic, retain) NSArray *positivePOIs;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)_parkIsLargerThanMaximumDiameterWithAreaNodes:(id)arg1;
- (id)description;
- (bool)isValid;
- (double)maximumParkDiameter;
- (unsigned long long)minimumNumberOfPOIs;
- (bool)mustBeSpecial;
- (id)negativePOIs;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (id)positivePOIs;
- (void)setMaximumParkDiameter:(double)arg1;
- (void)setMinimumNumberOfPOIs:(unsigned long long)arg1;
- (void)setMustBeSpecial:(bool)arg1;
- (void)setNegativePOIs:(id)arg1;
- (void)setPositivePOIs:(id)arg1;

@end
