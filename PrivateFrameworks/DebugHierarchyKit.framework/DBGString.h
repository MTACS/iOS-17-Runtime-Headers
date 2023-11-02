
@interface DBGString : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *string;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withString:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)objectValue;
- (void)setString:(id)arg1;
- (id)string;

@end
