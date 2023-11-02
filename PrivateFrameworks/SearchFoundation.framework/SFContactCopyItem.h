
@interface SFContactCopyItem : SFCopyItem <NSCopying, NSSecureCoding, SFContactCopyItem> {
    NSURL * _contactFileLocation;
    SFPerson * _person;
}

@property (nonatomic, copy) NSURL *contactFileLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFPerson *person;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactFileLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)person;
- (void)setContactFileLocation:(id)arg1;
- (void)setPerson:(id)arg1;

@end
