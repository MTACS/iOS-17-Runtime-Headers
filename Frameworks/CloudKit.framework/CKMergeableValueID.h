
@interface CKMergeableValueID : NSObject <CKRoughlyEquivalent, CKXPCSuitableString, NSCopying, NSSecureCoding> {
    bool  _encrypted;
    NSData * _identifier;
    NSString * _recordFieldName;
    NSString * _recordName;
    NSString * _zoneName;
    NSString * _zoneOwner;
}

@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (nonatomic, readonly, copy) NSData *identifier;
@property (nonatomic, readonly) NSString *recordFieldName;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) NSString *zoneName;
@property (nonatomic, readonly) NSString *zoneOwner;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKXPCSuitableString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 zoneName:(id)arg2 zoneOwner:(id)arg3;
- (id)initWithData:(id)arg1 zoneName:(id)arg2 zoneOwner:(id)arg3 recordName:(id)arg4 recordFieldName:(id)arg5 encrypted:(bool)arg6;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 recordID:(id)arg2 key:(id)arg3 encrypted:(bool)arg4;
- (id)initWithName:(id)arg1 zoneID:(id)arg2;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMergeableValueID:(id)arg1;
- (id)key;
- (id)name;
- (id)recordFieldName;
- (id)recordID;
- (id)recordName;
- (id)zoneID;
- (id)zoneName;
- (id)zoneOwner;

@end
