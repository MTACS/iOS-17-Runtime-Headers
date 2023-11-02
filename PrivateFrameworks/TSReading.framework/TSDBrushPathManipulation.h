
@interface TSDBrushPathManipulation : TSDPathManipulation {
    struct CGPath { } * mBrushStroke;
    NSMutableArray * mMiddleSections;
    double  mRepeatLength;
    NSMutableDictionary * mSections;
    double  mSmallLimitWidth;
    NSMutableArray * mSmallSections;
    bool  mSplitAtSharpAngles;
}

@end
