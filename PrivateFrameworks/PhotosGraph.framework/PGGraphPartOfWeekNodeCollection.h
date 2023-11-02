
@interface PGGraphPartOfWeekNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;

- (id)momentNodes;

@end
