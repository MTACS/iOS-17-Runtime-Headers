
@protocol TBTileRequestItem <NSObject, NSCopying>

@required

- (NSString *)etag;
- (NSNumber *)key;

@end
