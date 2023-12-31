
@interface EQKitLayout : NSObject <EQKitLayout> {
    double  mAscent;
    EQKitBox * mBox;
    double  mDescent;
    EQKitEnvironmentInstance * mEnvironment;
    double  mLeading;
    double  mNaturalAlignmentOffset;
    <EQKitRootNode> * mRoot;
    double  mScale;
    bool  mSingleLineHeight;
}

@property (nonatomic, readonly) EQKitBox *box;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)box;
- (void)dealloc;
- (double)depth;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (id)init;
- (id)initWithRoot:(id)arg1 environment:(id)arg2;
- (bool)layoutWithContext:(id)arg1;
- (double)naturalAlignmentOffset;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)vsize;
- (double)width;

@end
