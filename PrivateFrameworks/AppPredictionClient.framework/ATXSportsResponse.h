
@interface ATXSportsResponse : NSObject <NSSecureCoding> {
    NSArray * _teams;
}

@property (nonatomic, readonly) NSArray *teams;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTeams:(id)arg1;
- (id)teams;

@end
