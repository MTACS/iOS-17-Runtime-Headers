
@interface ATXUIFeedbackSessionContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _sessions;
}

@property (nonatomic, readonly) NSDictionary *sessions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIFeedbackSessionContext:(id)arg1;
- (id)returnAndRemoveUIFeedbackSessionWithSessionIdentifier:(id)arg1 endDate:(id)arg2;
- (id)sessions;
- (void)trackNewUIFeedbackSessionWithSessionIdentifier:(id)arg1 startDate:(id)arg2;
- (id)uiFeedbackSessionWithSessionIdentifier:(id)arg1;

@end
