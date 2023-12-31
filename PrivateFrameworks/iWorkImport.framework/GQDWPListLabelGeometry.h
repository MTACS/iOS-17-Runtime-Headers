
@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable> {
    float  mBaselineOffset;
    int  mLabelAlignment;
    float  mScale;
    bool  mScaleWithText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (float)baselineOffset;
- (int)labelAlignment;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (float)scale;
- (bool)scaleWithText;

@end
