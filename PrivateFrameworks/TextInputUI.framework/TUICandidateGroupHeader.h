
@interface TUICandidateGroupHeader : UICollectionReusableView {
    long long  _alignment;
    double  _rowHeight;
    <TUICandidateViewStyle> * _style;
    NSString * _text;
    UILabel * _textLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _virtualLabelContainerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double rowHeight;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } virtualLabelContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (long long)alignment;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setAlignment:(long long)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setVirtualLabelContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)style;
- (id)text;
- (id)textLabel;
- (void)updateGroupHeaderLabelPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })virtualLabelContainerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end
