
@interface CWFSensingParameters : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSArray * _activityLabels;
    NSString * _comment;
    int  _matchFrameType;
    NSArray * _matchMACAddresses;
    long long  _numberOfReports;
    NSArray * _placeLabels;
    long long  _scheduleDailyAt;
    long long  _scheduleOnceAfter;
    bool  _submitMetric;
    long long  _timeout;
}

@property (nonatomic, copy) NSArray *activityLabels;
@property (nonatomic, copy) NSString *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int matchFrameType;
@property (nonatomic, copy) NSArray *matchMACAddresses;
@property (nonatomic) long long numberOfReports;
@property (nonatomic, copy) NSArray *placeLabels;
@property (nonatomic) long long scheduleDailyAt;
@property (nonatomic) long long scheduleOnceAfter;
@property (nonatomic) bool submitMetric;
@property (readonly) Class superclass;
@property (nonatomic) long long timeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONCompatibleKeyValueMap;
- (id)activityLabels;
- (id)comment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSensingParameters:(id)arg1;
- (int)matchFrameType;
- (id)matchMACAddresses;
- (long long)numberOfReports;
- (id)placeLabels;
- (long long)scheduleDailyAt;
- (long long)scheduleOnceAfter;
- (void)setActivityLabels:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setMatchFrameType:(int)arg1;
- (void)setMatchMACAddresses:(id)arg1;
- (void)setNumberOfReports:(long long)arg1;
- (void)setPlaceLabels:(id)arg1;
- (void)setScheduleDailyAt:(long long)arg1;
- (void)setScheduleOnceAfter:(long long)arg1;
- (void)setSubmitMetric:(bool)arg1;
- (void)setTimeout:(long long)arg1;
- (bool)submitMetric;
- (long long)timeout;

@end
