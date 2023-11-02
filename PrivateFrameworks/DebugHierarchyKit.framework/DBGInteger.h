
@interface DBGInteger : NSObject <DBGValue, DBGValueJSONSerialization> {
    bool  _backingTypeIsLong;
    long long  _integerValue;
}

@property bool backingTypeIsLong;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long integerValue;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withValue:(long long)arg1;

- (id)JSONCompatibleRepresentation;
- (bool)backingTypeIsLong;
- (id)debugDescription;
- (id)description;
- (id)initWithInteger:(long long)arg1;
- (long long)integerValue;
- (id)objectValue;
- (void)setBackingTypeIsLong:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;

@end
