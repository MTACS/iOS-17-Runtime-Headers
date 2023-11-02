
@interface RemindersUICore.TTRIMenuButtonAttachment : NSTextAttachment {
    void font;
    void horizontalPadding;
    void menu;
    void textColor;
    void traitCollection;
    void verticalPadding;
}

@property (nonatomic) double lineLayoutPadding;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (double)lineLayoutPadding;
- (void)setLineLayoutPadding:(double)arg1;

@end
