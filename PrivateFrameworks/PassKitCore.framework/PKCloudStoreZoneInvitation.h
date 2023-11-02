
@interface PKCloudStoreZoneInvitation : NSObject <NSSecureCoding> {
    NSString * _containerIdentifier;
    NSDate * _dateCreated;
    NSData * _shareInvitationToken;
    NSURL * _shareURL;
    NSString * _zoneName;
}

@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, retain) NSData *shareInvitationToken;
@property (nonatomic, retain) NSURL *shareURL;
@property (nonatomic, copy) NSString *zoneName;

+ (id)cloudStoreZoneInvitationWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)dateCreated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCloudStoreZoneInvitation:(id)arg1;
- (id)protobuf;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setShareInvitationToken:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)shareInvitationToken;
- (id)shareURL;
- (id)zoneName;

@end
