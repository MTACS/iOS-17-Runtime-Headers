
@interface HKMedicationsScoredMercuryId : NSObject {
    NSNumber * _mercuryId;
    NSNumber * _score;
}

@property (nonatomic, retain) NSNumber *mercuryId;
@property (nonatomic, retain) NSNumber *score;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMercuryId:(id)arg1 score:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mercuryId;
- (id)score;
- (void)setMercuryId:(id)arg1;
- (void)setScore:(id)arg1;

@end
