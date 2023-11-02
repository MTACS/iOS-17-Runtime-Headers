
@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSDictionary * _fileMap;
}

@property (nonatomic, copy) NSDictionary *fileMap;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addNewAssetInfoFromFileMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)fileInfoIdentifierWithMainIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2;
- (id)fileInfoWithMainIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2 scale:(long long)arg3;
- (id)fileMap;
- (id)filesFromDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 clientConditions:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setFileMap:(id)arg1;

@end
