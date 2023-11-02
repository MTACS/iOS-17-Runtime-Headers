
@interface ICLegacyNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource> {
    NSString * _content;
    NSString * _plainText;
}

@property (nonatomic, copy) NSString *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *plainText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)content;
- (id)initWithTitle:(id)arg1 content:(id)arg2 plainText:(id)arg3;
- (id)plainText;
- (void)setContent:(id)arg1;
- (void)setPlainText:(id)arg1;

@end
