
@interface IDSGameCenterData : NSObject <NSSecureCoding> {
    NSString * _contactsAssociationID;
    NSDate * _contactsLastUpdatedDate;
    NSNumber * _contactsSharingState;
}

@property (nonatomic, retain) NSString *contactsAssociationID;
@property (nonatomic, retain) NSDate *contactsLastUpdatedDate;
@property (nonatomic, retain) NSNumber *contactsSharingState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compareAgainstData:(id)arg1;
- (id)contactsAssociationID;
- (id)contactsLastUpdatedDate;
- (id)contactsSharingState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssociationID:(id)arg1 sharingState:(id)arg2 lastUpdatedDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (void)setContactsAssociationID:(id)arg1;
- (void)setContactsLastUpdatedDate:(id)arg1;
- (void)setContactsSharingState:(id)arg1;

@end
