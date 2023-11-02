
@interface PXStoryProducerResult : NSObject {
    NSError * _error;
    unsigned long long  _flags;
    NSNumber * _fractionCompleted;
    id  _object;
    double  _productionDuration;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSNumber *fractionCompleted;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) double productionDuration;

+ (id)nullResult;

- (void).cxx_destruct;
- (id)deliveredNowWithRequestTime:(double)arg1;
- (id)description;
- (id)error;
- (id)error:(id)arg1;
- (unsigned long long)flags;
- (id)flags:(unsigned long long)arg1;
- (id)fractionCompleted;
- (id)fractionCompleted:(float)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isDegraded;
- (bool)isEqual:(id)arg1;
- (id)object;
- (double)productionDuration;

@end
