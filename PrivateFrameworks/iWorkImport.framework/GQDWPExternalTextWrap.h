
@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable> {
    float  mAlphaThreshold;
    int  mAttachmentWrapType;
    bool  mFloatingWrapEnabled;
    int  mFloatingWrapType;
    bool  mInlineWrapEnabled;
    float  mMargin;
    int  mWrapDirection;
    int  mWrapStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (float)alphaThreshold;
- (int)attachmentWrapType;
- (bool)floatingWrapEnabled;
- (int)floatingWrapType;
- (bool)inlineWrapEnabled;
- (float)margin;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (int)wrapDirection;
- (int)wrapStyle;

@end
