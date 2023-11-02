
@protocol DEDSecureArchiving <NSObject>

@required

+ (NSSet *)archivedClasses;

@optional

+ (id)secureUnarchiveWithData:(NSData *)arg1;

- (NSData *)secureArchive;

@end
