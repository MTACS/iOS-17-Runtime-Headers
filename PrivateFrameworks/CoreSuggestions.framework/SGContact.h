
@interface SGContact : NSObject <NSCopying, NSSecureCoding> {
    SGDateComponents * _birthday;
    _PASCachedResult * _cachedDetailForRecordIdMap;
    NSArray * _emailAddresses;
    SGName * _name;
    NSArray * _phones;
    NSString * _photoPath;
    NSArray * _postalAddresses;
    SGRecordId * _recordId;
    unsigned long long  _significance;
    unsigned long long  _significanceOrigin;
    NSArray * _socialProfiles;
    int  _updatedFields;
}

@property (nonatomic, copy) SGDateComponents *birthday;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) SGName *name;
@property (nonatomic, copy) NSArray *phones;
@property (nonatomic, readonly, copy) NSString *photoPath;
@property (nonatomic, copy) NSArray *postalAddresses;
@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic) unsigned long long significance;
@property (nonatomic) unsigned long long significanceOrigin;
@property (nonatomic, copy) NSArray *socialProfiles;
@property (nonatomic) int updatedFields;

+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 socialProfiles:(id)arg6;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 socialProfiles:(id)arg6 birthday:(id)arg7 photoPath:(id)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addresses;
- (id)birthday;
- (id)cnContact;
- (bool)containsDetailSuggestions;
- (bool)containsSuggestions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailForRecordId:(id)arg1;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDetailsWithBlock:(id /* block */)arg1;
- (bool)hasNonTrivialInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 socialProfiles:(id)arg6 birthday:(id)arg7 photoPath:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContact:(id)arg1;
- (id)name;
- (id)phones;
- (id)photoPath;
- (id)postalAddresses;
- (id)recordId;
- (unsigned long long)richness;
- (void)setBirthday:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setSignificance:(unsigned long long)arg1;
- (void)setSignificanceOrigin:(unsigned long long)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setUpdatedFields:(int)arg1;
- (unsigned long long)significance;
- (unsigned long long)significanceOrigin;
- (id)socialProfiles;
- (int)updatedFields;

@end
