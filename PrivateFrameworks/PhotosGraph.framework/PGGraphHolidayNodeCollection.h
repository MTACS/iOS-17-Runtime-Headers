
@interface PGGraphHolidayNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphMomentNodeCollection *celebratingMomentNodes;
@property (nonatomic, readonly) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *holidayNames;
@property (nonatomic, readonly) NSSet *localizedHolidayNames;
@property (readonly) Class superclass;

+ (id)holidayNodesWithCategory:(unsigned long long)arg1 inGraph:(id)arg2;
+ (id)holidayNodesWithName:(id)arg1 inGraph:(id)arg2;
+ (id)holidayNodesWithNames:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)celebratingMomentNodes;
- (id)dateNodes;
- (id)featureNodeCollection;
- (id)holidayNames;
- (id)localizedHolidayNames;

@end
