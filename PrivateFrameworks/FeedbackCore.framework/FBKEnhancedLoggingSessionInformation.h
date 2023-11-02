
@interface FBKEnhancedLoggingSessionInformation : NSObject <NSSecureCoding> {
    NSDate * _createdAt;
    NSSet * _deviceIdentifiers;
    long long  _enhancedLoggingDuration;
    long long  _enhancedLoggingRetryCount;
    NSNumber * _feedbackID;
    NSNumber * _followupID;
    NSString * _subtitle;
    NSString * _title;
    NSDate * _updatedAt;
}

@property (nonatomic, readonly) FBKContentItem *contentItem;
@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, retain) NSSet *deviceIdentifiers;
@property (nonatomic, readonly) NSSet *devices;
@property (nonatomic) long long enhancedLoggingDuration;
@property (nonatomic) long long enhancedLoggingRetryCount;
@property (nonatomic, retain) NSNumber *feedbackID;
@property (nonatomic, retain) NSNumber *followupID;
@property (nonatomic, readonly) NSString *localizedWhenItWillGather;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDate *updatedAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentItem;
- (id)createdAt;
- (id)deviceIdentifiers;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (long long)enhancedLoggingDuration;
- (long long)enhancedLoggingRetryCount;
- (id)feedbackID;
- (id)followupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItem:(id)arg1 followup:(id)arg2 filePredicate:(id)arg3 devices:(id)arg4;
- (id)localizedWhenItWillGather;
- (id)searchText;
- (void)setCreatedAt:(id)arg1;
- (void)setDeviceIdentifiers:(id)arg1;
- (void)setEnhancedLoggingDuration:(long long)arg1;
- (void)setEnhancedLoggingRetryCount:(long long)arg1;
- (void)setFeedbackID:(id)arg1;
- (void)setFollowupID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdatedAt:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)updatedAt;

@end
