
@interface BRCItemDBRowIDAndZoneJobIdentifier : BRCIntAndZoneJobIdentifier

@property (nonatomic, readonly) long long itemDBRowID;

- (id)initWithItemDBRowID:(long long)arg1 zoneRowID:(id)arg2;
- (long long)itemDBRowID;

@end
