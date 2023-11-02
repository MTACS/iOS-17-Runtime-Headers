
@interface HAECGData : NSObject {
    unsigned long long  _flags;
    float  _value;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) float value;

- (unsigned long long)flags;
- (id)initWithFlags:(unsigned long long)arg1 value:(float)arg2;
- (float)value;

@end
