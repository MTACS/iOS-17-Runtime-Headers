
@interface AFDismissAlarmRequest : AFSiriRequest {
    NSArray * _alarmURLs;
}

@property (nonatomic, copy) NSArray *alarmURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmURLs;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarmURLs:(id)arg1;

@end
