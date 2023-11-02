
@interface CKAssociatedMessageChatItem : CKChatItem {
    NSString * _timestampString;
}

@property (nonatomic, readonly) NSString *associatedChatItemGUID;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) UIImage *attributionImage;
@property (nonatomic, readonly) UIColor *attributionImageTintColor;
@property (nonatomic, readonly) bool failed;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; } geometryDescriptor;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) bool parentMessageIsFromMe;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, copy) NSString *timestampString;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forChatItemSize:(struct CGSize { double x1; double x2; })arg2 transcriptOrientation:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedParentFrameForPositioning:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forItemSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)applyTransformToView:(id)arg1 viewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 parentSize:(struct CGSize { double x1; double x2; })arg3 forGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAssociatedMessageItemSize:(struct CGSize { double x1; double x2; })arg1 parentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg3;
+ (double)horizontalOriginForAssociatedMessageItemSize:(struct CGSize { double x1; double x2; })arg1 parentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg3;
+ (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformForImageViewWithGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg1 shouldScale:(bool)arg2 parentSize:(struct CGSize { double x1; double x2; })arg3;
+ (double)verticalOriginForAssociatedMessageItemSize:(struct CGSize { double x1; double x2; })arg1 parentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg3;

- (void).cxx_destruct;
- (id)IMAssociatedMessageChatItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forChatItemSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedParentFrameForPositioning:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)associatedChatItemGUID;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)attributionImage;
- (id)attributionImageTintColor;
- (bool)failed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameRelativeToParentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptor;
- (id)guid;
- (double)horizonalOriginRelativeToParentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFromMe;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (id)loadTimestampString;
- (id)loadTranscriptDrawerText;
- (bool)parentMessageIsFromMe;
- (id)sender;
- (void)setTimestampString:(id)arg1;
- (id)time;
- (id)timestampString;
- (BOOL)transcriptOrientation;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformForImageViewWithParentSize:(struct CGSize { double x1; double x2; })arg1 shouldScale:(bool)arg2;
- (double)verticalOriginRelativeToParentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)wantsDrawerLayout;

@end
