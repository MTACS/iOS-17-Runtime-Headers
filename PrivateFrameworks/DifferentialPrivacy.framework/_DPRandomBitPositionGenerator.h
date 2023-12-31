
@interface _DPRandomBitPositionGenerator : NSObject {
    unsigned long long  _m;
}

@property (nonatomic, readonly) unsigned long long m;

+ (id)generatorWithDimensionality:(unsigned long long)arg1;

- (id)description;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)arg1;
- (unsigned long long)m;
- (unsigned long long)sample;

@end
