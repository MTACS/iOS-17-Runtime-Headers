
@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol> {
    unsigned long long  _maxDistance;
    NSString * _targetString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxDistance;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetString;

+ (bool)debugAppendText:(id)arg1;
+ (void)debugSetContext:(id)arg1;
+ (void)debugStoreContext;
+ (id)transformArray:(id)arg1 withTargetIndex:(unsigned long long)arg2 maximumDistance:(unsigned long long)arg3;
+ (id)withTarget:(id)arg1 maxDistance:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTarget:(id)arg1 maxDistance:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTokenDistanceMappingTransformer:(id)arg1;
- (unsigned long long)maxDistance;
- (void)setMaxDistance:(unsigned long long)arg1;
- (void)setTargetString:(id)arg1;
- (id)targetString;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
