
@interface DBGInt : NSObject <DBGValue, DBGValueJSONSerialization> {
    int  _intValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int intValue;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(int)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithInt:(int)arg1;
- (int)intValue;
- (id)objectValue;
- (void)setIntValue:(int)arg1;

@end
