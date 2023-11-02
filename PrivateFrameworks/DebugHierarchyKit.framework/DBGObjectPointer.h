
@interface DBGObjectPointer : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSString * _objectPointer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *objectPointer;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withAddress:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithAddress:(id)arg1;
- (id)objectPointer;
- (id)objectValue;
- (void)setObjectPointer:(id)arg1;

@end
