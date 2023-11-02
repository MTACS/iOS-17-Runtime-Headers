
@interface DBGBool : NSObject <DBGValue, DBGValueJSONSerialization> {
    bool  _boolValue;
}

@property bool boolValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(bool)arg1;

- (id)JSONCompatibleRepresentation;
- (bool)boolValue;
- (id)debugDescription;
- (id)description;
- (id)initWithBool:(bool)arg1;
- (id)objectValue;
- (void)setBoolValue:(bool)arg1;

@end
