
@interface DBGFloat : NSObject <DBGValue, DBGValueJSONSerialization> {
    float  _floatValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property float floatValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(float)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (float)floatValue;
- (id)initWithFloat:(float)arg1;
- (id)objectValue;
- (void)setFloatValue:(float)arg1;

@end
