
@interface ATXScheduledPinnedTimeEvent : NSObject <NSSecureCoding> {
    NSDateComponents * _dateComponents;
    NSString * _eventIdentifier;
    long long  _fuzzyTime;
    ATXTime * _fuzzyTimeRangeEnd;
    ATXTime * _fuzzyTimeRangeStart;
    long long  _granularity;
    ATXPinnedTimeEvent * _pinnedTimeEvent;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (nonatomic, readonly) long long fuzzyTime;
@property (nonatomic, readonly) ATXTime *fuzzyTimeRangeEnd;
@property (nonatomic, readonly) ATXTime *fuzzyTimeRangeStart;
@property (nonatomic, readonly) long long granularity;
@property (nonatomic, readonly) ATXPinnedTimeEvent *pinnedTimeEvent;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithEventIdentifier:(id)arg1;
- (id)copyWithGranularity:(long long)arg1 dateComponents:(id)arg2 fuzzyTime:(long long)arg3 fuzzyTimeRangeStart:(id)arg4 fuzzyTimeRangeEnd:(id)arg5;
- (id)dateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (long long)fuzzyTime;
- (id)fuzzyTimeRangeEnd;
- (id)fuzzyTimeRangeStart;
- (long long)granularity;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinnedTimeEvent:(id)arg1 granularity:(long long)arg2 dateComponents:(id)arg3 fuzzyTime:(long long)arg4 fuzzyTimeRangeStart:(id)arg5 fuzzyTimeRangeEnd:(id)arg6;
- (id)initWithPinnedTimeEvent:(id)arg1 granularity:(long long)arg2 dateComponents:(id)arg3 fuzzyTime:(long long)arg4 fuzzyTimeRangeStart:(id)arg5 fuzzyTimeRangeEnd:(id)arg6 uuid:(id)arg7 eventIdentifier:(id)arg8;
- (id)pinnedTimeEvent;
- (id)uuid;

@end
