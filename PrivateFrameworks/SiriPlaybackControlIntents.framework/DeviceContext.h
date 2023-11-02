
@interface DeviceContext : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *groupId;
@property (nonatomic) long long nowPlayingMediaType;
@property (nonatomic) long long nowPlayingState;
@property (nonatomic, copy) NSDate *nowPlayingTimestamp;
@property (nonatomic) long long proximity;
@property (nonatomic, copy) NSString *routeId;
@property (nonatomic, retain) NSNumber *silentPrimary;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
