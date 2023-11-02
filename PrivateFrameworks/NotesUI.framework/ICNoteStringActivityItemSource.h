
@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource> {
    NSAttributedString * _attributedString;
    id /* block */  _attributedStringCreator;
}

@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic, copy) id /* block */ attributedStringCreator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (bool)allowsAttributedStringForActivityType:(id)arg1;
- (id)attributedString;
- (id /* block */)attributedStringCreator;
- (id)init;
- (id)initWithTitle:(id)arg1 attributedStringCreator:(id /* block */)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributedStringCreator:(id /* block */)arg1;

@end
