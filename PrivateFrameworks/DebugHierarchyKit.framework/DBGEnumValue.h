
@interface DBGEnumValue : NSObject <DBGValue, DBGValueJSONSerialization> {
    id  _enumValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) id enumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)enumValue;
- (id)initWithCustomValue:(id)arg1;
- (long long)integerValue;
- (id)objectValue;
- (void)setEnumValue:(id)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;

@end
