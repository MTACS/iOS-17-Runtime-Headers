
@interface GameCenterUI.DynamicTypeLinkedLabel : GameCenterUI.DynamicTypeLabel {
    void items;
    void linkInteractionDelegate;
    void tapGestureRecognizer;
}

@property (nonatomic, retain) NSAttributedString *attributedText;

- (void).cxx_destruct;
- (id)attributedText;
- (id)initWithCoder:(id)arg1;
- (void)labelTapped:(id)arg1;
- (void)setAttributedText:(id)arg1;

@end
