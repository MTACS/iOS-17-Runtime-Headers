
@interface PXOperationStatus : NSObject <NSCopying> {
    NSError * _error;
    bool  _indeterminate;
    double  _progress;
    long long  _state;
}

@property (nonatomic, readonly) NSError *error;
@property (getter=isIndeterminate, nonatomic, readonly) bool indeterminate;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithState:(long long)arg1 error:(id)arg2;
- (id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isIndeterminate;
- (id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2;
- (double)progress;
- (id)redactedDescription;
- (long long)state;

@end
