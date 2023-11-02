
@interface PGGraphCelebratingEdgeCollection : PGGraphEdgeCollection

@property (nonatomic, readonly) PGGraphHolidayNodeCollection *holidayNodes;

+ (Class)edgeClass;

- (id)holidayNodes;

@end
