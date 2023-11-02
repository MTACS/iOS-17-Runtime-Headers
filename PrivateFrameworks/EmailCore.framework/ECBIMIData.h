
@interface ECBIMIData : NSObject {
    NSURL * _evidenceLocation;
    unsigned long long  _hash;
    NSString * _hashAlgorithm;
    NSData * _indicator;
    NSString * _indicatorHash;
    NSURL * _location;
}

@property (nonatomic, readonly) NSURL *evidenceLocation;
@property (nonatomic, readonly) NSString *hashAlgorithm;
@property (nonatomic, readonly, copy) NSData *indicator;
@property (nonatomic, readonly) NSString *indicatorHash;
@property (nonatomic, readonly) NSURL *location;

+ (id)bimiDataForHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)evidenceLocation;
- (unsigned long long)hash;
- (id)hashAlgorithm;
- (id)indicator;
- (id)indicatorHash;
- (id)initWithIndicator:(id)arg1 location:(id)arg2 evidenceLocation:(id)arg3 indicatorHash:(id)arg4 hashAlgorithm:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)location;

@end
