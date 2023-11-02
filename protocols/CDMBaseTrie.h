
@protocol CDMBaseTrie <NSObject>

@required

- (bool)hasEntry:(NSString *)arg1;
- (bool)hasPrefix:(NSString *)arg1;
- (NSArray *)traversePrefix:(NSString *)arg1;

@end
