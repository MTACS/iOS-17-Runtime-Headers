
@interface SUUITextBoxTableViewCell : SUUITableViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textBoxInsets;
    SUUITextBoxView * _textBoxView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textBoxInsets;
@property (nonatomic, readonly) SUUITextBoxView *textBoxView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextBoxInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textBoxInsets;
- (id)textBoxView;

@end
