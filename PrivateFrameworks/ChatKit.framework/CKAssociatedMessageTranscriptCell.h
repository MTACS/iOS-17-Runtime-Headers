
@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell {
    UIView * _associatedItemView;
    double  _cumulativeAssociatedOffset;
    <CKAssociatedMessageTranscriptCellDelegate> * _delegate;
    struct IMAssociatedMessageGeometryDescriptor { 
        unsigned long long layoutIntent; 
        unsigned long long associatedLayoutIntent; 
        double parentPreviewWidth; 
        double xScalar; 
        double yScalar; 
        double scale; 
        double rotation; 
    }  _geometryDescriptor;
    CKTranscriptCollectionViewLayoutAttributes * _layoutAttributes;
    double  _parentRotationOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _parentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rawAssociatedItemViewFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } adjustedContentAlignmentRect;
@property (nonatomic, retain) UIView *associatedItemView;
@property (nonatomic) double cumulativeAssociatedOffset;
@property (nonatomic) <CKAssociatedMessageTranscriptCellDelegate> *delegate;
@property (nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; } geometryDescriptor;
@property (nonatomic, copy) CKTranscriptCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic) double parentRotationOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } parentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rawAssociatedItemViewFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedContentAlignmentRect;
- (void)applyLayoutAttributes:(id)arg1;
- (id)associatedItemView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })associatedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (double)cumulativeAssociatedOffset;
- (id)delegate;
- (bool)failureButtonAdjustsContentAlignmentRect;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)layoutAttributes;
- (void)layoutSubviewsForAlignmentContents;
- (double)parentRotationOffset;
- (struct CGSize { double x1; double x2; })parentSize;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rawAssociatedItemViewFrame;
- (void)setAssociatedItemView:(id)arg1;
- (void)setCumulativeAssociatedOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setParentRotationOffset:(double)arg1;
- (void)setParentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRawAssociatedItemViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)swipeToReplyLayoutOffset;

@end
