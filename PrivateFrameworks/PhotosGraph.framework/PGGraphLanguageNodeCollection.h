
@interface PGGraphLanguageNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) NSSet *locales;

+ (Class)nodeClass;
+ (id)nodesWithLocaleIdentifiers:(id)arg1 inGraph:(id)arg2;

- (id)locales;

@end
