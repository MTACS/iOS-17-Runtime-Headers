
@protocol HKCodedObject <NSObject>

@required

+ (NSArray *)indexableKeyPathsWithPrefix:(NSString *)arg1;

- (bool)applyConcepts:(NSArray *)arg1 forKeyPath:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)codingsForKeyPath:(NSString *)arg1 error:(id*)arg2;

@end
