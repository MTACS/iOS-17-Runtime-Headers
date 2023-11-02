
@interface NearbySessions.NearbyInvitationData : NSObject <NSCoding, NSSecureCoding> {
    void displayName;
    void hostConnectionInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  invitationID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sourceProviderID;
    void sourceProviderName;
    void userInfo;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
