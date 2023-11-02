
@protocol PGGraphTimedEvent <PGGraphEvent>

@required

- (NSSet *)celebratedHolidayNodes;
- (NSSet *)dateNodes;
- (NSSet *)holidayNodes;
- (NSSet *)seasonNodes;

@end
