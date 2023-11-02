
@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry> {
    CLKComplicationTemplate * _complicationTemplate;
    NSDate * _date;
    bool  _finalized;
    NSString * _timelineAnimationGroup;
}

@property (nonatomic, copy) CLKComplicationTemplate *complicationTemplate;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finalized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timelineAnimationGroup;
@property (setter=tl_setEntryDate:, nonatomic, retain) NSDate *tl_entryDate;

+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complicationTemplate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (bool)finalized;
- (id)finalizedCopy;
- (id)initWithCoder:(id)arg1;
- (void)setComplicationTemplate:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFinalized:(bool)arg1;
- (void)setTimelineAnimationGroup:(id)arg1;
- (id)timelineAnimationGroup;
- (id)tl_entryDate;
- (void)tl_setEntryDate:(id)arg1;
- (bool)tl_validate:(id*)arg1;
- (bool)validateComplicationFamily:(long long)arg1;
- (bool)validateWithError:(id*)arg1;

@end
