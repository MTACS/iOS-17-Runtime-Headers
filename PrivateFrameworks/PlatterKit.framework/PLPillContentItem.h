
@interface PLPillContentItem : NSObject {
    UIView * _accessoryView;
    NSString * _identifier;
    bool  _solo;
    unsigned long long  _style;
    id  _text;
    PLPillContentWrapperView * _wrapperView;
}

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (getter=_identifier, nonatomic, readonly, copy) NSString *identifier;
@property (getter=isSolo, nonatomic, readonly) bool solo;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic) PLPillContentWrapperView *wrapperView;

- (void).cxx_destruct;
- (id)_identifier;
- (id)_initWithIdentifier:(id)arg1 text:(id)arg2 style:(unsigned long long)arg3 accessoryView:(id)arg4 solo:(bool)arg5;
- (id)accessoryView;
- (id)attributedText;
- (id)debugDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessoryView:(id)arg1;
- (id)initWithAttributedText:(id)arg1;
- (id)initWithAttributedText:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithAttributedText:(id)arg1 style:(unsigned long long)arg2 accessoryView:(id)arg3;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithText:(id)arg1 style:(unsigned long long)arg2 accessoryView:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLikePillContentItem:(id)arg1;
- (bool)isSolo;
- (id)itemWithAttributedText:(id)arg1;
- (id)itemWithAttributedText:(id)arg1 style:(unsigned long long)arg2;
- (id)itemWithAttributedText:(id)arg1 style:(unsigned long long)arg2 accessoryView:(id)arg3;
- (id)itemWithStyle:(unsigned long long)arg1;
- (id)itemWithText:(id)arg1;
- (id)itemWithText:(id)arg1 style:(unsigned long long)arg2;
- (id)itemWithText:(id)arg1 style:(unsigned long long)arg2 accessoryView:(id)arg3;
- (void)setWrapperView:(id)arg1;
- (id)soloItem;
- (unsigned long long)style;
- (id)text;
- (void)updateWithContentItem:(id)arg1;
- (id)wrapperView;

@end
