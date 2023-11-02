
@interface SLPerson : NSObject <NSCopying, NSSecureCoding> {
    CNContact * _contact;
    CNContactStore * _contactStore;
    NSString * _displayName;
    NSString * _handle;
    bool  _hasMutableContact;
    NSString * _shortDisplayName;
    NSData * _thumbnailImageData;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic) bool hasMutableContact;
@property (nonatomic, copy) NSString *shortDisplayName;
@property (nonatomic, retain) NSData *thumbnailImageData;

+ (id)createMutableContactWithHandle:(id)arg1;
+ (id)errorForPersonDomain:(id)arg1 andCode:(long long)arg2;
+ (id)fetchMeContact;
+ (id)keysForCNContact;
+ (id)predicateForHandle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)contactStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchCNContactWithHandle:(id)arg1;
- (id)handle;
- (bool)hasMutableContact;
- (unsigned long long)hash;
- (id)initWithCSPerson:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2;
- (id)initWithPortraitPerson:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setHasMutableContact:(bool)arg1;
- (void)setShortDisplayName:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)shortDisplayName;
- (id)thumbnailImageData;

@end
