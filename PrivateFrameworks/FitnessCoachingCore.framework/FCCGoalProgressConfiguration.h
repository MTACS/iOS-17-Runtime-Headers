
@interface FCCGoalProgressConfiguration : NSObject <FCCDataSerializable> {
    FCCAlmostThereConfiguration * _almostThereConfiguration;
    FCCAtypicalDayConfiguration * _atypicalDayConfiguration;
    FCCCompletionOffTrackConfiguration * _completionOffTrackConfiguration;
    NSDate * _expirationDate;
    long long  _minimumNumberOfActiveDays;
    NSDate * _userEndOfDay;
    NSDate * _userStartOfDay;
}

@property (nonatomic, readonly) FCCAlmostThereConfiguration *almostThereConfiguration;
@property (nonatomic, readonly) FCCAtypicalDayConfiguration *atypicalDayConfiguration;
@property (nonatomic, readonly) FCCCompletionOffTrackConfiguration *completionOffTrackConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long minimumNumberOfActiveDays;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *userEndOfDay;
@property (nonatomic, readonly) NSDate *userStartOfDay;

- (void).cxx_destruct;
- (id)almostThereConfiguration;
- (id)atypicalDayConfiguration;
- (id)completionOffTrackConfiguration;
- (id)description;
- (id)expirationDate;
- (id)initWithMinimumNumberOfActiveDays:(long long)arg1 userStartOfDay:(id)arg2 userEndOfDay:(id)arg3 expirationDate:(id)arg4 almostThereConfiguration:(id)arg5 atypicalDayConfiguration:(id)arg6 completionOffTrackConfiguration:(id)arg7;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (long long)minimumNumberOfActiveDays;
- (id)protobuf;
- (id)transportData;
- (id)userEndOfDay;
- (id)userStartOfDay;

@end
