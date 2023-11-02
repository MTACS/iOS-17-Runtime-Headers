
@interface TFKey : NSObject <NSCopying> {
    unsigned long long  _address;
    NSString * _name;
    id  _type;
}

@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id type;

- (void).cxx_destruct;
- (unsigned long long)address;
- (id)copyWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithAddressOfType:(id)arg1 name:(id)arg2;
- (id)initWithTypeName:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)type;

@end
