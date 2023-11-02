
@interface ATXProactiveSuggestionUISpecification : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    bool  _allowedOnHomeScreen;
    bool  _allowedOnLockscreen;
    bool  _allowedOnSpotlight;
    NSDate * _contextEndDate;
    NSDate * _contextStartDate;
    unsigned long long  _predictionReasons;
    NSArray * _preferredLayoutConfigs;
    NSString * _reason;
    bool  _shouldClearOnEngagement;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) bool allowedOnHomeScreen;
@property (nonatomic, readonly) bool allowedOnLockscreen;
@property (nonatomic, readonly) bool allowedOnSpotlight;
@property (nonatomic, readonly) NSDate *contextEndDate;
@property (nonatomic, readonly) NSDate *contextStartDate;
@property (nonatomic, readonly) unsigned long long predictionReasons;
@property (nonatomic, readonly) NSArray *preferredLayoutConfigs;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) bool shouldClearOnEngagement;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowedOnHomeScreen;
- (bool)allowedOnLockscreen;
- (bool)allowedOnSpotlight;
- (bool)checkAndReportDecodingFailureIfNeededForBOOL:(bool)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)contextEndDate;
- (id)contextStartDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (bool)fuzzyIsEqualToUISpecification:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 preferredLayoutConfigs:(id)arg4 allowedOnLockscreen:(bool)arg5 allowedOnHomeScreen:(bool)arg6 allowedOnSpotlight:(bool)arg7 shouldClearOnEngagement:(bool)arg8;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 preferredLayoutConfigs:(id)arg4 allowedOnLockscreen:(bool)arg5 allowedOnHomeScreen:(bool)arg6 allowedOnSpotlight:(bool)arg7 shouldClearOnEngagement:(bool)arg8 predictionReasons:(unsigned long long)arg9;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 preferredLayoutConfigs:(id)arg4 allowedOnLockscreen:(bool)arg5 allowedOnHomeScreen:(bool)arg6 allowedOnSpotlight:(bool)arg7 shouldClearOnEngagement:(bool)arg8 predictionReasons:(unsigned long long)arg9 contextStartDate:(id)arg10 contextEndDate:(id)arg11;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 preferredLayoutConfigs:(id)arg3 allowedOnLockscreen:(bool)arg4 allowedOnHomeScreen:(bool)arg5 allowedOnSpotlight:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonRawData;
- (unsigned long long)predictionReasons;
- (id)preferredLayoutConfigs;
- (id)proto;
- (id)reason;
- (bool)shouldClearOnEngagement;
- (id)subtitle;
- (id)title;

@end
