
@interface PGGraphHighlightTypeNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property (nonatomic, readonly) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly) Class superclass;

+ (id)aggregationTypeNodesInGraph:(id)arg1;
+ (id)concludedTripTypeNodesInGraph:(id)arg1;
+ (id)defaultTypeNodesInGraph:(id)arg1;
+ (id)longTripTypeNodesInGraph:(id)arg1;
+ (Class)nodeClass;
+ (id)onGoingTripTypeNodesInGraph:(id)arg1;
+ (id)shortTripTypeNodesInGraph:(id)arg1;
+ (id)tripTypeNodesInGraph:(id)arg1;
+ (id)typeNodesWithLabel:(id)arg1 inGraph:(id)arg2;

- (id)featureNodeCollection;
- (id)highlightGroupNodes;
- (id)highlightNodes;

@end
