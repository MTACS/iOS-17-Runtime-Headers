
@interface KTStatusResult : NSObject <NSSecureCoding> {
    unsigned long long  _accountStatus;
    NSDate * _expectedSelfResolutionDate;
    unsigned long long  _optIn;
    bool  _optInState;
    NSArray * _recentFailedEventIds;
    unsigned long long  _selfStatus;
    unsigned long long  _systemStatus;
}

@property unsigned long long accountStatus;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSDate *expectedSelfResolutionDate;
@property unsigned long long optIn;
@property bool optInState;
@property (retain) NSArray *recentFailedEventIds;
@property unsigned long long selfStatus;
@property unsigned long long systemStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accountStatus;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedSelfResolutionDate;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)optIn;
- (bool)optInState;
- (id)recentFailedEventIds;
- (unsigned long long)selfStatus;
- (void)setAccountStatus:(unsigned long long)arg1;
- (void)setExpectedSelfResolutionDate:(id)arg1;
- (void)setOptIn:(unsigned long long)arg1;
- (void)setOptInState:(bool)arg1;
- (void)setRecentFailedEventIds:(id)arg1;
- (void)setSelfStatus:(unsigned long long)arg1;
- (void)setSystemStatus:(unsigned long long)arg1;
- (unsigned long long)systemStatus;

@end
