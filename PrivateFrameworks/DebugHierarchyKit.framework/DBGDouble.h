
@interface DBGDouble : NSObject <DBGValue, DBGValueJSONSerialization> {
    double  _doubleValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double doubleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(double)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (double)doubleValue;
- (id)initWithDouble:(double)arg1;
- (id)objectValue;
- (void)setDoubleValue:(double)arg1;

@end
