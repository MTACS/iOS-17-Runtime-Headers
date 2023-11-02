
@interface CKVDatasetStatistics : NSObject {
    unsigned long long  _count;
    unsigned long long  _maxLength;
    double  _meanLength;
    unsigned long long  _minLength;
    CKVDatasetRecord * _record;
    double  _stdevLength;
    unsigned long long  _sumLength;
    unsigned long long  _sumQLength;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long maxLength;
@property (nonatomic, readonly) double meanLength;
@property (nonatomic, readonly) unsigned long long minLength;
@property (nonatomic, readonly) CKVDatasetRecord *record;
@property (nonatomic, readonly) double stdevLength;
@property (nonatomic, readonly) unsigned long long sumLength;
@property (nonatomic, readonly) unsigned long long sumQLength;

+ (id)builderWithRecord:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRecord:(id)arg1 count:(unsigned long long)arg2 minLength:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 sumLength:(unsigned long long)arg5 sumQLength:(unsigned long long)arg6 meanLength:(double)arg7 stdevLength:(double)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDatasetStatistics:(id)arg1;
- (unsigned long long)maxLength;
- (double)meanLength;
- (unsigned long long)minLength;
- (id)record;
- (double)stdevLength;
- (unsigned long long)sumLength;
- (unsigned long long)sumQLength;

@end
