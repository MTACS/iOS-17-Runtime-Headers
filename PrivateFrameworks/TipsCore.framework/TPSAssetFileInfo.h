
@interface TPSAssetFileInfo : TPSSerializableObject {
    NSString * _identifier;
    long long  _scale;
    TPSSize * _size;
    long long  _userInterface;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long scale;
@property (nonatomic, copy) TPSSize *size;
@property (nonatomic) long long userInterface;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)scale;
- (void)setIdentifier:(id)arg1;
- (void)setScale:(long long)arg1;
- (void)setSize:(id)arg1;
- (void)setUserInterface:(long long)arg1;
- (id)size;
- (long long)userInterface;

@end
