
@interface KVField : NSObject <KVJSONEncodable> {
    NSData * _buffer;
    const struct Field { unsigned char x1[1]; } * _field;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fieldWithBuffer:(id)arg1 root:(const void*)arg2;

- (void).cxx_destruct;
- (id)JSONWithIndent:(unsigned char)arg1;
- (id)description;
- (long long)fieldType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuffer:(id)arg1 root:(const struct Field { unsigned char x1[1]; }*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToField:(id)arg1;
- (id)label;
- (long long)localeType;
- (id)value;

@end
