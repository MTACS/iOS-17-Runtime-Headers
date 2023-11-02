
@interface RTISessionOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _animated;
    bool  _enhancedWindowingModeEnabled;
    long long  _offscreenDirection;
    bool  _shouldResign;
}

@property (nonatomic) bool animated;
@property (nonatomic) bool enhancedWindowingModeEnabled;
@property (nonatomic) long long offscreenDirection;
@property (nonatomic) bool shouldResign;

+ (id)defaultBeginOptions;
+ (id)defaultEndOptions;
+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (bool)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enhancedWindowingModeEnabled;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)offscreenDirection;
- (void)setAnimated:(bool)arg1;
- (void)setEnhancedWindowingModeEnabled:(bool)arg1;
- (void)setOffscreenDirection:(long long)arg1;
- (void)setShouldResign:(bool)arg1;
- (bool)shouldResign;

@end
