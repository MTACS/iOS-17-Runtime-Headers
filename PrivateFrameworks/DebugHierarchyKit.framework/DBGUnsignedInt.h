
@interface DBGUnsignedInt : NSObject <DBGValue, DBGValueJSONSerialization> {
    unsigned int  _unsignedIntValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned int unsignedIntValue;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(unsigned int)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)objectValue;
- (void)setUnsignedIntValue:(unsigned int)arg1;
- (unsigned int)unsignedIntValue;

@end
