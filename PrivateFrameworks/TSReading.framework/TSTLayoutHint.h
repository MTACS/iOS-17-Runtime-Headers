
@interface TSTLayoutHint : NSObject <NSSecureCoding, TSDHint> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mCacheHintID;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mCellRange;
    struct CGSize { 
        double width; 
        double height; 
    }  mEffectiveSize;
    bool  mHorizontal;
    bool  mIsValid;
    TSTLayout * mLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  mMaximumSize;
    unsigned int  mPartitionPosition;
    NSNumber * mPartitioningPass;
}

@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cacheHintID;
@property (nonatomic) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cellRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } effectiveSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool horizontal;
@property (nonatomic) bool isValid;
@property (nonatomic) TSTLayout *layout;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic, retain) NSNumber *partitioningPass;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;
+ (bool)supportsSecureCoding;

- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cacheHintID;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRange;
- (id)copyForArchiving;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })effectiveSize;
- (void)encodeWithCoder:(id)arg1;
- (id)firstChildHint;
- (bool)horizontal;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 hintId:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize { double x1; double x2; })arg4 effectiveSize:(struct CGSize { double x1; double x2; })arg5 layout:(id)arg6 validity:(bool)arg7 horizontal:(bool)arg8;
- (void)invalidate;
- (bool)isFirstHint;
- (bool)isValid;
- (id)lastChildHint;
- (id)layout;
- (struct CGSize { double x1; double x2; })maximumSize;
- (void)offsetByDelta:(int)arg1;
- (bool)overlapsWithSelection:(id)arg1;
- (unsigned int)partitionPosition;
- (id)partitioningPass;
- (oneway void)release;
- (void)setCacheHintID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setEffectiveSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHorizontal:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPartitionPosition:(unsigned int)arg1;
- (void)setPartitioningPass:(id)arg1;

@end
