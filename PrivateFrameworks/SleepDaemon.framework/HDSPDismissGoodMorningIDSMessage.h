
@interface HDSPDismissGoodMorningIDSMessage : HDSPEventRecordMessage

@property (nonatomic, readonly) NSDate *goodMorningDismissed;

- (id)dateDescription;
- (id)goodMorningDismissed;
- (id)initWithGoodMorningDismissedDate:(id)arg1;

@end
