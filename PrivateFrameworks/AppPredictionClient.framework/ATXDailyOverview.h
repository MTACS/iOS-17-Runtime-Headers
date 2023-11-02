
@interface ATXDailyOverview : NSObject <NSSecureCoding> {
    ATXDailyTimeSummary * _dailySummary;
    NSArray * _pinnedEvents;
    NSArray * _sections;
    unsigned long long  _type;
}

@property (nonatomic, readonly) ATXDailyTimeSummary *dailySummary;
@property (nonatomic, readonly, copy) NSArray *pinnedEvents;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dailySummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 sections:(id)arg2 dailySummary:(id)arg3 pinnedEvents:(id)arg4;
- (id)pinnedEvents;
- (id)sections;
- (unsigned long long)type;

@end
