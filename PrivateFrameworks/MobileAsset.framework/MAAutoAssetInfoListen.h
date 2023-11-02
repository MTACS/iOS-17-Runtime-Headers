
@interface MAAutoAssetInfoListen : NSObject <NSSecureCoding> {
    MAAutoAssetNotifications * _activeNotifications;
}

@property (nonatomic, readonly, retain) MAAutoAssetNotifications *activeNotifications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeNotifications;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotifications:(id)arg1;
- (id)summary;

@end
