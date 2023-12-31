
@interface CEKLightingControlItem : NSObject {
    UIImage * _displayImage;
    NSString * _displayName;
    UIImage * _displayOutlineImage;
    UIImage * _displayShadowImage;
    long long  _lightingType;
    UIImage * _selectionBackgroundImage;
}

@property (nonatomic, readonly) UIImage *displayImage;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) UIImage *displayOutlineImage;
@property (nonatomic, readonly) UIImage *displayShadowImage;
@property (nonatomic, readonly) long long lightingType;
@property (nonatomic, readonly) UIImage *selectionBackgroundImage;

+ (id)_defaultOutlineImage;

- (void).cxx_destruct;
- (id)displayImage;
- (id)displayName;
- (id)displayOutlineImage;
- (id)displayShadowImage;
- (id)initWithType:(long long)arg1;
- (long long)lightingType;
- (id)selectionBackgroundImage;

@end
