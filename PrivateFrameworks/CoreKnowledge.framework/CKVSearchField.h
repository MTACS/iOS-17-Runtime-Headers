
@interface CKVSearchField : NSObject <NSCopying> {
    NSString * _fieldText;
    long long  _fieldType;
}

@property (nonatomic, readonly) NSString *fieldText;
@property (nonatomic, readonly) long long fieldType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fieldText;
- (long long)fieldType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(long long)arg1 text:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToField:(id)arg1;

@end
