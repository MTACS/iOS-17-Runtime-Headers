
@interface DBGVector3 : NSObject <DBGValue, DBGValueJSONSerialization> {
    void _vector3;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property void vector3;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withVector3;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithVector3;
- (id)objectValue;
- (void)setVector3;
- (void)vector3;

@end
