
@interface VUIMultiviewConfig : NSObject {
    bool  _isEnabled;
    long long  _maximumPlayerCount;
}

@property (nonatomic) bool isEnabled;
@property (nonatomic) long long maximumPlayerCount;

- (id)init;
- (bool)isEnabled;
- (long long)maximumPlayerCount;
- (void)setIsEnabled:(bool)arg1;
- (void)setMaximumPlayerCount:(long long)arg1;

@end
