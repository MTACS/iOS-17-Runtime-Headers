
@interface _DPBiasedCoin : NSObject {
    double  _bias;
}

@property (nonatomic, readonly) double bias;

+ (id)coinWithBias:(double)arg1;
+ (double)sanitizedProbability:(double)arg1;

- (double)bias;
- (id)description;
- (bool)flip;
- (unsigned char)generateByte;
- (id)init;
- (id)initWithBias:(double)arg1;

@end
