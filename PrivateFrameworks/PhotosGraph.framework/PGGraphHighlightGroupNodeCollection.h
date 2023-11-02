
@interface PGGraphHighlightGroupNodeCollection : PGGraphHighlightNodeCollection

@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featuredLocationOrAreaNodes;
@property (nonatomic, readonly) PGGraphHighlightNodeCollection *highlightNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *tripFeatureNodes;
@property (nonatomic, readonly) PGGraphHighlightTypeNodeCollection *typeNodes;

+ (id)areaFeatureOfHighlightGroup;
+ (id)featureOfHighlightGroup;
+ (id)highlightGroupNodesForUUIDs:(id)arg1 inGraph:(id)arg2;
+ (id)locationFeatureOfHighlightGroup;
+ (id)momentsOfHighlightGroup;
+ (Class)nodeClass;

- (id)featuredLocationOrAreaNodes;
- (id)highlightGroupNodes;
- (id)highlightNodes;
- (id)momentNodes;
- (id)tripFeatureNodes;
- (id)typeNodes;

@end
