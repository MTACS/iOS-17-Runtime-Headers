
@interface PHASESubband : NSObject {
    float  _frequency;
    float  _value;
}

@property (nonatomic, readonly) float frequency;
@property (nonatomic, readonly) float value;

+ (id)new;

- (float)frequency;
- (id)init;
- (id)initWithFrequency:(float)arg1 value:(float)arg2;
- (float)value;

@end
