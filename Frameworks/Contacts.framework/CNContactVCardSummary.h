
@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _avatarContacts;
    unsigned long long  _contactCount;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *avatarContacts;
@property (nonatomic, readonly) unsigned long long contactCount;
@property (nonatomic, readonly, copy) NSString *descriptiveLabel;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)defaultNameFormatter;
+ (bool)isAvatarContacts:(id)arg1 equalTo:(id)arg2;
+ (id)localizedStringWithName:(id)arg1 andOtherName:(id)arg2;
+ (id)localizedStringWithName:(id)arg1 andThisManyOthers:(unsigned long long)arg2;
+ (id)makeFormatter;
+ (id)nameForContact:(id)arg1;
+ (id)namesForContact:(id)arg1;
+ (id)readingOptionsWithContactLimit:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avatarContacts;
- (unsigned long long)contactCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptiveLabel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contactCount:(unsigned long long)arg3 avatarContacts:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)title;

@end
