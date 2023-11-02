
@interface FixedParameter : NSObject {
    int  _identifier;
    float  _value;
}

@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) float value;

- (id)description;
- (int)identifier;
- (id)initWithIdentifier:(int)arg1 value:(float)arg2;
- (float)value;

@end
