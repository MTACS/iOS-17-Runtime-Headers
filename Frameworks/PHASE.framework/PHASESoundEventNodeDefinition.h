
@interface PHASESoundEventNodeDefinition : PHASEDefinition

@property (readonly, copy) NSArray *children;

+ (id)new;

- (id)children;
- (id)init;

@end
