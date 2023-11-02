
@interface _MDQueryTokenVariation : NSObject {
    float  _confidence;
    long long  _type;
    NSString * _variation;
}

@property (nonatomic) float confidence;
@property (nonatomic) long long type;
@property (nonatomic, readonly, copy) NSString *variation;

- (float)confidence;
- (void)dealloc;
- (id)initWithVariation:(id)arg1 type:(long long)arg2 confidence:(float)arg3;
- (void)setConfidence:(float)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)variation;

@end
