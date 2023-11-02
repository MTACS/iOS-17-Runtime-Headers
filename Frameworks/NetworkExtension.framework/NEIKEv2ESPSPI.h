
@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {
    unsigned int  _value;
}

@property (readonly) unsigned int value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)value;

@end
