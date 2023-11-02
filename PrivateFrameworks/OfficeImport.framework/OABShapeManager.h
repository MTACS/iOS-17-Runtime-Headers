
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    void * mShape;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)hidden;
- (id)initWithShape:(void*)arg1;
- (id)initWithShape:(void*)arg1 masterShape:(void*)arg2;
- (bool)isFillOK;
- (bool)isFilled;
- (bool)isShadowOK;
- (bool)isShadowed;
- (bool)isStrokeOK;
- (bool)isStroked;
- (bool)isTextPath;
- (bool)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (bool)textPathItalic;
- (bool)textPathSmallcaps;
- (bool)textPathStrikethrough;
- (int)textPathTextAlignment;
- (bool)textPathUnderline;
- (id)textPathUnicodeString;

@end
