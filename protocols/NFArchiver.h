
@protocol NFArchiver <NSObject>

@required

- (bool)archiveDirectory:(NSURL *)arg1 toLocation:(NSURL *)arg2;
- (bool)unarchive:(NSURL *)arg1 toLocation:(NSURL *)arg2;

@end
