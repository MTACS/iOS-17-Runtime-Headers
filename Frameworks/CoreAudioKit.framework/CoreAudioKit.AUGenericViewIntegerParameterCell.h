
@interface CoreAudioKit.AUGenericViewIntegerParameterCell : CoreAudioKit.AUGenericViewParameterCellBase {
    void editButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  indexPath;
    void valueButton;
}

@property (nonatomic) UIButton *editButton;
@property (nonatomic) UIButton *valueButton;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)editButton;
- (id)initWithCoder:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setValueButton:(id)arg1;
- (id)valueButton;

@end
