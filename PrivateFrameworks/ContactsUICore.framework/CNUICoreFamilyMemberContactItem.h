
@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    long long  _contactType;
    NSString * _formattedName;
    bool  _hasBeenPersisted;
    NSData * _imageData;
    bool  _isProposed;
    bool  _isUnreachable;
    long long  _whitelistStatus;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) long long contactType;
@property (nonatomic, readonly) NSString *formattedName;
@property (nonatomic, readonly) bool hasBeenPersisted;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) bool isProposed;
@property (nonatomic, readonly) bool isUnreachable;
@property (nonatomic, readonly) long long whitelistStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (long long)contactType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedName;
- (bool)hasBeenPersisted;
- (unsigned long long)hash;
- (id)imageData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(bool)arg4 isProposed:(bool)arg5 contactType:(long long)arg6 whitelistStatus:(long long)arg7 hasBeenPersisted:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isProposed;
- (bool)isUnreachable;
- (long long)whitelistStatus;

@end
