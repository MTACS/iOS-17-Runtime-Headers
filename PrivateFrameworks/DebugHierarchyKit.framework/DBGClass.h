
@interface DBGClass : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSString * _className;
}

@property (retain) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withName:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)className;
- (id)debugDescription;
- (id)description;
- (id)initWithClassName:(id)arg1;
- (id)objectValue;
- (void)setClassName:(id)arg1;

@end
