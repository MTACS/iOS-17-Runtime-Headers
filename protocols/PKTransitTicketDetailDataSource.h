
@protocol PKTransitTicketDetailDataSource <NSObject>

@required

- (unsigned long long)numberOfLegs;
- (NSString *)titleForLeg:(unsigned long long)arg1;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (NSString *)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (NSString *)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end
