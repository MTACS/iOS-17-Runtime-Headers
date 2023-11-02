
@protocol BRFieldVersionSignature <NSObject>

@required

- (bool)hasOldVersionIdentifier;
- (NSString *)oldVersionIdentifier;
- (NSString *)versionIdentifier;

@end
