
@interface DBGObjectInfo : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSDictionary * _objectInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *objectInfo;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withInfo:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)displayString;
- (id)initWithInfo:(id)arg1;
- (id)objectClassName;
- (id)objectInfo;
- (id)objectPointer;
- (id)objectValue;
- (void)setObjectInfo:(id)arg1;

@end
