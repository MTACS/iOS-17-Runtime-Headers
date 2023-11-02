
@interface CNCoreDelegateInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSNumber * _dsid;
    bool  _isMe;
    NSPersonNameComponents * _nameComponents;
    NSString * _principalPath;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly, copy) NSNumber *dsid;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly, copy) NSString *principalPath;

+ (id)hardCodedPrincipalPathForDSID:(id)arg1;
+ (id)nameComponentsForFamilyMember:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_hardCodedPrincipalPathForFamilyMember:(id)arg1;
- (id)altDSID;
- (id)appleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 principalPath:(id)arg4 nameComponents:(id)arg5 isMe:(bool)arg6;
- (id)initWithFamilyMember:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nameComponents;
- (id)principalPath;

@end
