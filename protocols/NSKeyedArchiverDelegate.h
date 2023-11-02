
@protocol NSKeyedArchiverDelegate <NSObject>

@optional

- (void)archiver:(NSKeyedArchiver *)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(NSKeyedArchiver *)arg1 willEncodeObject:(id)arg2;
- (void)archiver:(NSKeyedArchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (void)archiverDidFinish:(NSKeyedArchiver *)arg1;
- (void)archiverWillFinish:(NSKeyedArchiver *)arg1;

@end
