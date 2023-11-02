
@interface DBGUnsignedLong : NSObject <DBGValue, DBGValueJSONSerialization> {
    unsigned long long  _unsignedLongValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned long long unsignedLongValue;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(unsigned long long)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)objectValue;
- (void)setUnsignedLongValue:(unsigned long long)arg1;
- (unsigned long long)unsignedLongValue;

@end
