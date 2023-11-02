
@interface DEDRapportManager : NSObject

@property (readonly) NSString *mediaRemoteIdentifier;
@property (readonly) NSString *mediaSystemIdentifier;
@property (readonly) NSString *mediaSystemName;
@property (nonatomic, readonly) long long mediaSystemRole;

+ (id)sharedInstance;

- (id)mediaRemoteIdentifier;
- (id)mediaSystemIdentifier;
- (id)mediaSystemName;
- (long long)mediaSystemRole;
- (void)start;

@end
