
@interface PGGraphMobilityNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) NSArray *locationMobilityTypes;

+ (Class)nodeClass;

- (id)locationMobilityTypes;

@end
