
@interface DBGLongLong : NSObject <DBGValue, DBGValueJSONSerialization> {
    long long  _longLongValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long longLongValue;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(long long)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithLongLong:(long long)arg1;
- (long long)longLongValue;
- (id)objectValue;
- (void)setLongLongValue:(long long)arg1;

@end
