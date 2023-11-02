
@interface PGGraphNamedLocationNodeCollection : PGGraphLocationNodeCollection

@property (nonatomic, readonly) NSArray *names;

+ (id)locationNodeWithName:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)names;

@end
