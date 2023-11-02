
@interface STAskForTimeRequest : NSObject <NSSecureCoding> {
    bool  _deliverQuietly;
    bool  _oneMoreMinute;
    NSUUID * _requestIdentifier;
    NSString * _requestedResourceIdentifier;
    NSNumber * _requestingUserDSID;
    NSString * _requestingUserDisplayName;
    NSString * _resourceDisplayName;
    NSNumber * _timeRequested;
    NSDate * _timeStamp;
    long long  _usageType;
}

@property (nonatomic) bool deliverQuietly;
@property (nonatomic) bool oneMoreMinute;
@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (nonatomic, retain) NSUUID *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requestedResourceIdentifier;
@property (nonatomic, retain) NSNumber *requestingUserDSID;
@property (nonatomic, copy) NSString *requestingUserDisplayName;
@property (nonatomic, copy) NSString *resourceDisplayName;
@property (nonatomic, retain) NSNumber *timeRequested;
@property (nonatomic, retain) NSDate *timeStamp;
@property (nonatomic, readonly) long long usageType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)deliverQuietly;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2;
- (bool)oneMoreMinute;
- (id)payload;
- (id)requestIdentifier;
- (id)requestedResourceIdentifier;
- (id)requestingUserDSID;
- (id)requestingUserDisplayName;
- (id)resourceDisplayName;
- (void)setDeliverQuietly:(bool)arg1;
- (void)setOneMoreMinute:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestingUserDSID:(id)arg1;
- (void)setRequestingUserDisplayName:(id)arg1;
- (void)setResourceDisplayName:(id)arg1;
- (void)setTimeRequested:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeRequested;
- (id)timeStamp;
- (long long)usageType;

@end
