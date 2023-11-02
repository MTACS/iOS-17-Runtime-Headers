
@interface BLSHFlipbookContext : NSObject {
    CAContext * _caContext;
    bool  _inverted;
    bool  _wantsTransform;
}

@property (nonatomic, readonly) CAContext *caContext;
@property (getter=isInverted, nonatomic, readonly) bool inverted;
@property (nonatomic, readonly) bool wantsTransform;

- (void).cxx_destruct;
- (id)caContext;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCAContext:(id)arg1 wantsTransform:(bool)arg2 inverted:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInverted;
- (bool)wantsTransform;

@end
