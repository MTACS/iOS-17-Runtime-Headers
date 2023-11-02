
@interface DBGVector4 : NSObject <DBGValue, DBGValueJSONSerialization> {
    void _vector4;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property void vector4;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withVector4;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithVector4;
- (id)objectValue;
- (void)setVector4;
- (void)vector4;

@end
