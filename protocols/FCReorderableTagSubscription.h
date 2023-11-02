
@protocol FCReorderableTagSubscription <NFCopying>

@required

- (<FCReorderableTagSubscription> *)copyWithOrder:(NSNumber *)arg1;
- (NSNumber *)order;
- (NSString *)tagID;

@end
