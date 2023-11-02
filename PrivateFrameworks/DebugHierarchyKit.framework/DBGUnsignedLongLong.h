
@interface DBGUnsignedLongLong : NSObject <DBGValue, DBGValueJSONSerialization> {
    unsigned long long  _unsignedLongLongValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned long long unsignedLongLongValue;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(unsigned long long)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)objectValue;
- (void)setUnsignedLongLongValue:(unsigned long long)arg1;
- (unsigned long long)unsignedLongLongValue;

@end
