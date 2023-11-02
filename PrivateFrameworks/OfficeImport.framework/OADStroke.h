
@interface OADStroke : OADProperties <NSCopying> {
    unsigned char  mCap;
    OADColor * mColor;
    unsigned char  mCompoundType;
    OADDash * mDash;
    OADFill * mFill;
    OADLineEnd * mHead;
    unsigned int  mIsCapOverridden;
    unsigned int  mIsColorOverridden;
    unsigned int  mIsCompoundTypeOverridden;
    unsigned int  mIsPenAlignmentOverridden;
    unsigned int  mIsWidthOverridden;
    OADLineJoin * mJoin;
    int  mPenAlignment;
    OADLineEnd * mTail;
    float  mWidth;
}

@property (nonatomic, retain) OADLineEnd *head;
@property (nonatomic, retain) OADLineEnd *tail;

+ (id)blackStroke;
+ (id)defaultProperties;
+ (id)nullStroke;

- (void).cxx_destruct;
- (unsigned char)cap;
- (id)color;
- (unsigned char)compoundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dash;
- (id)fill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)head;
- (id)init;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isCapOverridden;
- (bool)isColorOverridden;
- (bool)isCompoundTypeOverridden;
- (bool)isDashOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFillOverridden;
- (bool)isHeadOverridden;
- (bool)isJoinOverridden;
- (bool)isPenAlignmentOverridden;
- (bool)isTailOverridden;
- (bool)isWidthOverridden;
- (id)join;
- (int)penAlignment;
- (void)removeUnnecessaryOverrides;
- (void)setCap:(unsigned char)arg1;
- (void)setColor:(id)arg1;
- (void)setCompoundType:(unsigned char)arg1;
- (void)setDash:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setHead:(id)arg1;
- (void)setJoin:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPenAlignment:(int)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTail:(id)arg1;
- (void)setWidth:(float)arg1;
- (id)tail;
- (float)width;

@end
