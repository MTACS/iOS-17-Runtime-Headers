
@interface CKContextUserActivity : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSNumber * _numberOfOccurrences;
    double  _recordedTimeIntervalSince1970;
    NSUserActivity * _userActivity;
    NSData * _userActivityData;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) NSDate *entryDate;
@property (nonatomic, copy) NSNumber *numberOfOccurrences;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entryDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)numberOfOccurrences;
- (void)prepareForDonationWithCompletionHandler:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEntryDate:(id)arg1;
- (void)setNumberOfOccurrences:(id)arg1;
- (id)userActivity;
- (id)uuid;

@end
