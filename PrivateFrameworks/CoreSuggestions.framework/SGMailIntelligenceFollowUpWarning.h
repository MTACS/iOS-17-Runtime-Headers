
@interface SGMailIntelligenceFollowUpWarning : SGMailIntelligenceWarning {
    NSDate * _endDate;
    NSString * _endDateCore;
    NSDate * _startDate;
    NSString * _startDateCore;
    NSNumber * _type;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *endDateCore;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *startDateCore;
@property (nonatomic, retain) NSNumber *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)endDateCore;
- (id)initWithCoder:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (id)initWithNSDictionary:(id)arg1;
- (id)initWithSnippet:(id)arg1 core:(id)arg2 signature:(id)arg3 detectedLanguage:(id)arg4 isIncomingMessage:(bool)arg5 score:(id)arg6 startDate:(id)arg7 startDateCore:(id)arg8 endDate:(id)arg9 endDateCore:(id)arg10;
- (id)initWithString:(id)arg1;
- (void)setType:(id)arg1;
- (id)startDate;
- (id)startDateCore;
- (id)toLightJson;
- (id)toLightNSData;
- (id)toLightNSDictionary;
- (id)type;

@end
