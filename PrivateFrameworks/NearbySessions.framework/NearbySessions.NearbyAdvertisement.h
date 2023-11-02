
@interface NearbySessions.NearbyAdvertisement : NSObject <NSSecureCoding> {
    void $__lazy_storage_$_dataSource;
    void activityType;
    void contactID;
    void displayName;
    void handle;
    void identifier;
    void userInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
