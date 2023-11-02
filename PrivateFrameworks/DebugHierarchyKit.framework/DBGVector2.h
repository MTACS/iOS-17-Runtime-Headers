
@interface DBGVector2 : NSObject <DBGValue, DBGValueJSONSerialization> {
    void _vector2;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property void vector2;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withVector2;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithVector2;
- (id)objectValue;
- (void)setVector2;
- (void)vector2;

@end
