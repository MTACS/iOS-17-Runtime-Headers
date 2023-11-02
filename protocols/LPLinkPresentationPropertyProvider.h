
@protocol LPLinkPresentationPropertyProvider <NSObject>

@optional

- (NSArray *)alternateImages;
- (LPARAsset *)arAsset;
- (LPAudio *)audio;
- (UIColor *)backgroundColor;
- (LPImage *)backgroundImage;
- (LPImagePresentationProperties *)backgroundImageProperties;
- (NSString *)bottomCaption;
- (LPCaptionBarPresentationProperties *)captionBar;
- (NSString *)domainNameForIndicator;
- (LPImage *)icon;
- (LPImage *)image;
- (LPImagePresentationProperties *)imageProperties;
- (LPInlineMediaPlaybackInformation *)inlinePlaybackInformation;
- (bool)isPreliminary;
- (NSString *)mediaBottomCaption;
- (LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
- (NSString *)mediaTopCaption;
- (LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
- (NSNumber *)minimumHeight;
- (NSNumber *)overrideAllowOpeningSensitiveURLs;
- (NSURL *)overrideURL;
- (NSString *)quotedText;
- (long long)style;
- (NSString *)topCaption;
- (NSString *)trailingBottomCaption;
- (NSString *)trailingTopCaption;
- (LPVideo *)video;

@end
