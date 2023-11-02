
@interface PGGraphCalendarUnitNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)calendarUnit;
+ (id)calendarUnitNodesForUnitValue:(long long)arg1 inGraph:(id)arg2;
+ (id)calendarUnitNodesForUnitValues:(id)arg1 inGraph:(id)arg2;
+ (id)dateOfCalendarUnit;
+ (id)filter;
+ (Class)nodeClass;

- (id)dateNodes;
- (id)featureNodeCollection;

@end
