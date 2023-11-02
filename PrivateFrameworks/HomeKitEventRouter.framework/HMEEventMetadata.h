
@interface HMEEventMetadata : NSObject {
    double  _intervalSinceReferenceDate;
    unsigned long long  _rawCachePolicy;
    unsigned long long  _rawCombineType;
    unsigned long long  _rawQOS;
    NSString * _source;
}

@property (readonly) unsigned long long cachePolicy;
@property (readonly) unsigned long long combineType;
@property (readonly) double intervalSinceReferenceDate;
@property (readonly) unsigned long long rawCachePolicy;
@property (readonly) unsigned long long rawCombineType;
@property (readonly) unsigned long long rawQOS;
@property (readonly, copy) NSString *source;

- (void).cxx_destruct;
- (id)_initWithSource:(id)arg1 rawCachePolicy:(unsigned long long)arg2 rawCombineType:(unsigned long long)arg3 rawQos:(unsigned long long)arg4 timestamp:(double)arg5;
- (unsigned long long)cachePolicy;
- (unsigned long long)combineType;
- (id)initDefaultMetadata;
- (id)initWithSource:(id)arg1 cachePolicy:(unsigned long long)arg2 combineType:(unsigned long long)arg3 timestamp:(double)arg4;
- (double)intervalSinceReferenceDate;
- (unsigned long long)rawCachePolicy;
- (unsigned long long)rawCombineType;
- (unsigned long long)rawQOS;
- (id)source;

@end
