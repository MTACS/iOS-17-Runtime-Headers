
@interface HDDatabaseCorruptionEvent : NSObject <NSSecureCoding> {
    NSString * _buildDescription;
    long long  _component;
    NSDate * _date;
    NSError * _error;
    NSString * _failedObliterationReason;
    HKProfileIdentifier * _profileIdentifier;
}

@property (nonatomic, readonly, copy) NSString *buildDescription;
@property (readonly) long long component;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSString *failedObliterationReason;
@property (nonatomic, readonly, copy) HKProfileIdentifier *profileIdentifier;

+ (id)createForProfile:(id)arg1 component:(long long)arg2 error:(id)arg3 failedObliterationReason:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildDescription;
- (long long)component;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)failedObliterationReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 date:(id)arg2 profileIdentifier:(id)arg3 component:(long long)arg4 build:(id)arg5 failedObliterationReason:(id)arg6;
- (id)profileIdentifier;

@end
