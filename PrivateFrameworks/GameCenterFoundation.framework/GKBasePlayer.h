
@interface GKBasePlayer : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, retain) NSString *playerID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)playerID;

@end
