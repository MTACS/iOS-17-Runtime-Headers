
@interface PGGraphMusicSessionNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

+ (id)filter;

- (id)momentNodes;

@end
