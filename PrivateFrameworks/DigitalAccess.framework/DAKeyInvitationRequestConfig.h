
@interface DAKeyInvitationRequestConfig : NSObject <NSSecureCoding> {
    NSString * _ownerIdsIdentifier;
    NSUUID * _sharingSessionIdentifier;
}

@property (nonatomic, readonly) NSString *ownerIdsIdentifier;
@property (nonatomic, readonly) NSUUID *sharingSessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharingSessionIdentifier:(id)arg1 ownerIdsIdentifier:(id)arg2;
- (id)ownerIdsIdentifier;
- (id)sharingSessionIdentifier;

@end
