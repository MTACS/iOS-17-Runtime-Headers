
@interface DBGFont : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSDictionary * _fontDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *fontDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withDescription:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)displayString;
- (id)fontDescription;
- (id)initWithDescription:(id)arg1;
- (id)objectValue;

@end
