
@interface CAMFormattingManager : NSObject {
    bool  _supportsVerticalText;
    bool  _wantsCustomKerning;
}

@property (nonatomic, readonly) bool supportsVerticalText;
@property (nonatomic, readonly) bool wantsCustomKerning;

+ (id)sharedManager;

- (void)_commonCAMFormattingManagerInitialization;
- (id)init;
- (bool)supportsVerticalText;
- (bool)wantsCustomKerning;

@end
