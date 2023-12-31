
@protocol OABPropertiesManager <OABBasePropertiesManager>

@required

- (bool)hidden;
- (bool)isFillOK;
- (bool)isShadowOK;
- (bool)isStrokeOK;
- (bool)isTextPath;
- (bool)textPathBold;
- (NSString *)textPathFontFamily;
- (int)textPathFontSize;
- (bool)textPathItalic;
- (bool)textPathSmallcaps;
- (bool)textPathStrikethrough;
- (int)textPathTextAlignment;
- (bool)textPathUnderline;
- (NSString *)textPathUnicodeString;

@end
