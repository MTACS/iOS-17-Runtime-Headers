
@protocol _MFFlushableMessageSetIterator <NSObject>

@required

- (void)flush;
- (NSMutableIndexSet *)messageSet;

@end
