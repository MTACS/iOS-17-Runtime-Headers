
@protocol FCBlockedExplicitContentAccessCheckable <NFCopying>

@required

- (NSString *)identifier;
- (bool)isBlockedExplicitContent;

@end
