
@protocol ECMailbox <NSCopying, NSObject>

@required

- (NSURL *)URL;
- (NSString *)name;
- (NSString *)persistentID;
- (long long)type;

@end
