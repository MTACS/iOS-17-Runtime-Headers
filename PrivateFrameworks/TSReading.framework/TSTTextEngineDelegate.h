
@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {
    TSWPPadding * mPadding;
    unsigned int  mVerticalAlignment;
}

- (void)dealloc;
- (bool)forceWesternLineBreaking;
- (id)initWithPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 verticalAlignment:(unsigned int)arg2;
- (id)padding;
- (unsigned int)verticalAlignment;

@end
