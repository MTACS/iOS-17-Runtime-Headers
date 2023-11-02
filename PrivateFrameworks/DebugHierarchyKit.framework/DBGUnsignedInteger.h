
@interface DBGUnsignedInteger : NSObject <DBGValue, DBGValueJSONSerialization> {
    bool  _backingTypeIsUnsignedLong;
    unsigned long long  _unsignedIntegerValue;
}

@property bool backingTypeIsUnsignedLong;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned long long unsignedIntegerValue;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(unsigned long long)arg1;

- (id)JSONCompatibleRepresentation;
- (bool)backingTypeIsUnsignedLong;
- (id)debugDescription;
- (id)description;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)objectValue;
- (void)setBackingTypeIsUnsignedLong:(bool)arg1;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (unsigned long long)unsignedIntegerValue;

@end
