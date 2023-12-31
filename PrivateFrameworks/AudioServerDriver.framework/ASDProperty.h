
@interface ASDProperty : NSObject <NSCopying> {
    ASDPropertyAddress * _address;
    id  _value;
}

@property (nonatomic, readonly) ASDPropertyAddress *address;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 value:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
