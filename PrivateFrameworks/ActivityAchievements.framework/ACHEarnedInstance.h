
@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _createdDate;
    unsigned char  _creatorDevice;
    NSString * _externalIdentifier;
    unsigned long long  _key;
    struct { 
        unsigned short year; 
        unsigned char month; 
        unsigned char day; 
        bool valid; 
    }  _packedEarnedDateComponents;
    HDSyncIdentity * _syncIdentity;
    unsigned long long  _uniqueNameIndex;
    HKQuantity * _value;
}

@property (nonatomic, retain) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;
@property (nonatomic, retain) NSDateComponents *earnedDateComponents;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic) unsigned long long key;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; bool x4; } packedEarnedDateComponents;
@property (nonatomic, retain) HDSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSString *templateUniqueName;
@property (nonatomic, retain) HKQuantity *value;

+ (id)_allTemplateUniqueNames;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareEarnedDateWithEarnedInstance:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDate;
- (unsigned char)creatorDevice;
- (id)debugDescription;
- (id)description;
- (id)earnedDateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)key;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; bool x4; })packedEarnedDateComponents;
- (void)setCreatedDate:(id)arg1;
- (void)setCreatorDevice:(unsigned char)arg1;
- (void)setEarnedDateComponents:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setKey:(unsigned long long)arg1;
- (void)setPackedEarnedDateComponents:(struct { unsigned short x1; unsigned char x2; unsigned char x3; bool x4; })arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setTemplateUniqueName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)syncIdentity;
- (id)templateUniqueName;
- (id)value;

@end
