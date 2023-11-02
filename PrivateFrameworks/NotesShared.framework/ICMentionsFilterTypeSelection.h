
@interface ICMentionsFilterTypeSelection : ICParticipantsFilterTypeSelection

@property (nonatomic, readonly) NSString *currentUserID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserID;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)filterName;
- (long long)filterType;
- (id)shortEmptySummary;
- (id)summaryWithJoinOperatorMenu;

@end
