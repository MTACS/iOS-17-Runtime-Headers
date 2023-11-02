
@interface NearbySessions.NearbySessionInvitation : NSObject <NSSecureCoding> {
    void activityType;
    void displayName;
    void handle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void isPublic;
    void metadata;
    void sourceProviderID;
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
