
@interface DBGCustomValue : NSObject <DBGValue, DBGValueJSONSerialization> {
    id  _customValue;
}

@property (retain) id customValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)customValue;
- (id)description;
- (id)initWithCustomValue:(id)arg1;
- (id)objectValue;
- (void)setCustomValue:(id)arg1;

@end
