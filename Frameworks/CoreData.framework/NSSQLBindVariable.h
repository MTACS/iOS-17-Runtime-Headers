
@interface NSSQLBindVariable : NSObject {
    int  _cd_rc;
    unsigned int  _flags;
    unsigned int  _index;
    long long  _int64;
    NSPropertyDescription * _propertyDescription;
    unsigned char  _sqlType;
    NSPropertyDescription * _tombstonedPropertyDescription;
    id  _value;
}

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsCoercion;
- (void)dealloc;
- (bool)hasObjectValue;
- (unsigned int)index;
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(bool)arg4;
- (long long)int64;
- (id)propertyDescription;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setIndex:(unsigned int)arg1;
- (void)setInt64:(long long)arg1;
- (void)setSQLType:(unsigned char)arg1;
- (void)setTombstonedPropertyDescription:(id)arg1;
- (void)setUnsignedInt:(unsigned int)arg1;
- (void)setValue:(id)arg1;
- (unsigned char)sqlType;
- (id)tombstonedPropertyDescription;
- (unsigned int)unsignedInt;
- (id)value;

@end
