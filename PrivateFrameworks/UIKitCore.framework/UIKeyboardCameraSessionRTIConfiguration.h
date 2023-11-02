
@interface UIKeyboardCameraSessionRTIConfiguration : NSObject <NSSecureCoding> {
    bool  _isSingleLineDocument;
    bool  _isWebKitInteractionView;
    bool  _shouldSuppressKeyboard;
}

@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) bool isWebKitInteractionView;
@property (nonatomic) bool shouldSuppressKeyboard;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSingleLineDocument;
- (bool)isWebKitInteractionView;
- (void)setIsSingleLineDocument:(bool)arg1;
- (void)setIsWebKitInteractionView:(bool)arg1;
- (void)setShouldSuppressKeyboard:(bool)arg1;
- (bool)shouldSuppressKeyboard;

@end
