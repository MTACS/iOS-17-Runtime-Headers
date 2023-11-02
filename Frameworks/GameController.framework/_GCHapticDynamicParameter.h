
@interface _GCHapticDynamicParameter : NSObject {
    unsigned int  _type;
    double  _value;
}

@property (nonatomic, readonly) unsigned int type;
@property (nonatomic) double value;

- (id)initWithType:(unsigned int)arg1 value:(double)arg2;
- (void)setValue:(double)arg1;
- (unsigned int)type;
- (double)value;

@end
