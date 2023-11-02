
@interface UIContentUnavailableConfiguration : NSObject <NSSecureCoding, UIContentConfiguration> {
    unsigned long long  _axesPreservingSuperviewLayoutMargins;
    UIBackgroundConfiguration * _background;
    UIContentUnavailableButtonProperties * _buttonProperties;
    double  _buttonToSecondaryButtonPadding;
    struct { 
        unsigned int hasCustomizedPrefersSideBySideButtonAndSecondaryButton : 1; 
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; 
        unsigned int hasCustomizedDirectionalLayoutMargins : 1; 
        unsigned int hasCustomizedImageToTextPadding : 1; 
        unsigned int hasCustomizedTextToSecondaryTextPadding : 1; 
        unsigned int hasCustomizedTextToButtonPadding : 1; 
        unsigned int hasCustomizedButtonToSecondaryButtonPadding : 1; 
    }  _configurationFlags;
    long long  _defaultStyle;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _directionalLayoutMargins;
    UIContentUnavailableImageProperties * _imageProperties;
    double  _imageToTextPadding;
    bool  _prefersSideBySideButtonAndSecondaryButton;
    UIContentUnavailableButtonProperties * _secondaryButtonProperties;
    UIContentUnavailableTextProperties * _secondaryTextProperties;
    UIContentUnavailableTextProperties * _textProperties;
    double  _textToButtonPadding;
    double  _textToSecondaryTextPadding;
}

@property (nonatomic) long long alignment;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic, retain) UIBackgroundConfiguration *background;
@property (nonatomic, retain) UIButtonConfiguration *button;
@property (nonatomic, readonly) UIContentUnavailableButtonProperties *buttonProperties;
@property (nonatomic) double buttonToSecondaryButtonPadding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIContentUnavailableImageProperties *imageProperties;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic, copy) NSAttributedString *secondaryAttributedText;
@property (nonatomic, retain) UIButtonConfiguration *secondaryButton;
@property (nonatomic, readonly) UIContentUnavailableButtonProperties *secondaryButtonProperties;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, readonly) UIContentUnavailableTextProperties *secondaryTextProperties;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) UIContentUnavailableTextProperties *textProperties;
@property (nonatomic) double textToButtonPadding;
@property (nonatomic) double textToSecondaryTextPadding;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)emptyConfiguration;
+ (id)emptyExtraProminentConfiguration;
+ (id)emptyProminentConfiguration;
+ (id)loadingConfiguration;
+ (id)searchConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setSwiftBridgingButtonProperties:(id)arg1;
- (void)_setSwiftBridgingImageProperties:(id)arg1;
- (void)_setSwiftBridgingSecondaryButtonProperties:(id)arg1;
- (void)_setSwiftBridgingSecondaryTextProperties:(id)arg1;
- (void)_setSwiftBridgingTextProperties:(id)arg1;
- (long long)alignment;
- (id)attributedText;
- (unsigned long long)axesPreservingSuperviewLayoutMargins;
- (id)background;
- (id)button;
- (id)buttonProperties;
- (double)buttonToSecondaryButtonPadding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageProperties;
- (double)imageToTextPadding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)makeContentView;
- (id)secondaryAttributedText;
- (id)secondaryButton;
- (id)secondaryButtonProperties;
- (id)secondaryText;
- (id)secondaryTextProperties;
- (void)setAlignment:(long long)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1;
- (void)setBackground:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonToSecondaryButtonPadding:(double)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageToTextPadding:(double)arg1;
- (void)setSecondaryAttributedText:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextToButtonPadding:(double)arg1;
- (void)setTextToSecondaryTextPadding:(double)arg1;
- (id)text;
- (id)textProperties;
- (double)textToButtonPadding;
- (double)textToSecondaryTextPadding;
- (id)updatedConfigurationForState:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_containerized_defaultConfiguration;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)asTTRI;

@end
