
@interface TSTChangeDescriptor : NSObject {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mCellID;
    TSTCellRegion * mCellRegion;
    int  mChangeDescriptor;
    TSTCellRegion * mExpandedRegion;
    NSHashTable * mReferenceIdentifiers;
    TSTCellRegion * mStrokeRegion;
}

@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cellID;
@property (nonatomic, readonly) TSTCellRegion *cellRegion;
@property (nonatomic, readonly) int changeDescriptor;
@property (nonatomic, retain) TSTCellRegion *expandedRegion;
@property (nonatomic, readonly) NSHashTable *referenceIdentifiers;
@property (nonatomic, readonly) TSTCellRegion *strokeRegion;

+ (id)changeDescriptorWithType:(int)arg1;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 cellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 cellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 strokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 strokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 strokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;
+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;

- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRange;
- (id)cellRegion;
- (int)changeDescriptor;
- (void)dealloc;
- (id)description;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandedRange;
- (id)expandedRegion;
- (id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)referenceIdentifiers;
- (void)setExpandedRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setExpandedRegion:(id)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })strokeRange;
- (id)strokeRegion;

@end
