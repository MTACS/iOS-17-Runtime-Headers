
@interface ConversationKit.ParticipantViewLabelContainerView : UIView {
    void centerAlignedConstraints;
    void isCentered;
    void label;
    void leadingAlignedConstraints;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) UILabel *label;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;

@end