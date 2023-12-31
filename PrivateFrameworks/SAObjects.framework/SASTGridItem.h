
@interface SASTGridItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *gridCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)gridItem;
+ (id)gridItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)gridCells;
- (id)groupIdentifier;
- (void)setGridCells:(id)arg1;

@end
