
@interface PMMPrediction : NSObject {
    NSDate * _expirationDate;
    NSArray * _predictedItems;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSArray *predictedItems;

- (void).cxx_destruct;
- (id)description;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPredictedItems:(id)arg1 expirationDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPrediction:(id)arg1;
- (id)predictedItems;

@end
