
@interface NSDirectoryEnumerator : NSEnumerator

@property (readonly, copy) NSDictionary *directoryAttributes;
@property (readonly, copy) NSDictionary *fileAttributes;
@property (readonly) bool isEnumeratingDirectoryPostOrder;
@property (readonly) unsigned long long level;

- (id)directoryAttributes;
- (id)fileAttributes;
- (bool)isEnumeratingDirectoryPostOrder;
- (unsigned long long)level;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;

@end
