
@interface DBGCGFloat : NSObject <DBGValue, DBGValueJSONSerialization> {
    bool  _backingTypeIsDouble;
    double  _doubleValue;
    float  _floatValue;
}

@property double CGFloatValue;
@property bool backingTypeIsDouble;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double doubleValue;
@property float floatValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(double)arg1;

- (double)CGFloatValue;
- (id)JSONCompatibleRepresentation;
- (bool)backingTypeIsDouble;
- (id)debugDescription;
- (id)description;
- (double)doubleValue;
- (float)floatValue;
- (id)initWithCGFloat:(double)arg1;
- (id)objectValue;
- (void)setBackingTypeIsDouble:(bool)arg1;
- (void)setCGFloatValue:(double)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;

@end
