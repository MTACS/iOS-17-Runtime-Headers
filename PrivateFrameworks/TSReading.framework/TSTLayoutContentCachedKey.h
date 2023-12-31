
@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {
    bool  mCellWraps;
    double  mHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mPaddingInsets;
    TSWPParagraphStyle * mParagraphStyle;
    NSString * mString;
    int  mValueType;
    unsigned int  mVerticalAlignment;
    double  mWidth;
    int  mWritingDirection;
}

@property (nonatomic, readonly) bool cellWraps;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingInsets;
@property (nonatomic, readonly) TSWPParagraphStyle *paragraphStyle;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) int valueType;
@property (nonatomic, readonly) unsigned int verticalAlignment;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) int writingDirection;

- (bool)cellWraps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (double)height;
- (id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(bool)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 verticalAlignment:(unsigned int)arg8 writingDirection:(int)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayoutContentCachedKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingInsets;
- (id)paragraphStyle;
- (id)string;
- (int)valueType;
- (unsigned int)verticalAlignment;
- (double)width;
- (int)writingDirection;

@end
