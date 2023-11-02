
@interface TPSNotification : TPSSerializableObject <NSCopying, NSSecureCoding> {
    TPSAssets * _assets;
    NSString * _text;
    NSString * _title;
}

@property (nonatomic, copy) TPSAssets *assets;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;

+ (id)na_identity;
+ (id)notificationFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;

@end
