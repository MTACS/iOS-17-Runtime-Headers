
@interface MUPlaceSectionFooterViewModel : NSObject {
    id /* block */  _actionBlock;
    NSAttributedString * _attributedText;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) NSAttributedString *attributedText;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)attributedText;
- (void)setActionBlock:(id /* block */)arg1;

@end
