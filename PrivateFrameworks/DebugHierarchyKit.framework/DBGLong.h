
@interface DBGLong : NSObject <DBGValue, DBGValueJSONSerialization> {
    long long  _longValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long longValue;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(long long)arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithLong:(long long)arg1;
- (long long)longValue;
- (id)objectValue;
- (void)setLongValue:(long long)arg1;

@end
