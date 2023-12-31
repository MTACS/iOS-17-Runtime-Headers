
@interface SASportsStandingsSnippet : SASportsSnippet

@property (nonatomic, copy) NSArray *columns;
@property (nonatomic, copy) NSArray *entities;
@property (nonatomic, copy) NSArray *selectedEntities;
@property (nonatomic) bool showCardinalPositions;

+ (id)standingsSnippet;
+ (id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)columns;
- (id)encodedClassName;
- (id)entities;
- (id)groupIdentifier;
- (id)selectedEntities;
- (void)setColumns:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setSelectedEntities:(id)arg1;
- (void)setShowCardinalPositions:(bool)arg1;
- (bool)showCardinalPositions;

@end
