
@interface COConditionBundle : NSBundle

- (Class)classNamed:(id)arg1;
- (Class)classNamed:(id)arg1 error:(id*)arg2;
- (id)conditions;
- (id)initWithURL:(id)arg1;
- (bool)isRunnable:(id*)arg1;
- (bool)loadAndReturnError:(id*)arg1;

@end
