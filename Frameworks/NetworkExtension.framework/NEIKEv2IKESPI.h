
@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying> {
    unsigned long long  _value;
}

@property (readonly) unsigned long long value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)value;

@end
