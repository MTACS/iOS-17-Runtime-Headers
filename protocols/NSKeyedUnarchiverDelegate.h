
@protocol NSKeyedUnarchiverDelegate <NSObject>

@optional

- (Class)unarchiver:(NSKeyedUnarchiver *)arg1 cannotDecodeObjectOfClassName:(NSString *)arg2 originalClasses:(NSArray *)arg3;
- (id)unarchiver:(NSKeyedUnarchiver *)arg1 didDecodeObject:(id)arg2;
- (void)unarchiver:(NSKeyedUnarchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (void)unarchiverDidFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiverWillFinish:(NSKeyedUnarchiver *)arg1;

@end
