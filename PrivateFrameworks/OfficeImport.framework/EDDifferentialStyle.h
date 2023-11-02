
@interface EDDifferentialStyle : NSObject <NSCopying> {
    EDAlignmentInfo * mAlignmentInfo;
    EDBorders * mBorders;
    EDContentFormat * mContentFormat;
    EDFill * mFill;
    EDFont * mFont;
    EDProtection * mProtection;
}

@property (nonatomic, retain) EDAlignmentInfo *alignmentInfo;
@property (nonatomic, retain) EDBorders *borders;
@property (nonatomic, retain) EDContentFormat *contentFormat;
@property (nonatomic, retain) EDFill *fill;
@property (nonatomic, retain) EDFont *font;
@property (nonatomic, retain) EDProtection *protection;

+ (id)differentialStyle;

- (void).cxx_destruct;
- (id)alignmentInfo;
- (id)borders;
- (id)contentFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fill;
- (id)font;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setBorders:(id)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setProtection:(id)arg1;

@end
