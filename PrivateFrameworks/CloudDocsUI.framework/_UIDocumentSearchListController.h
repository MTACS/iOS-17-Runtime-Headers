
@interface _UIDocumentSearchListController : _UIDocumentListController {
    _UIDocumentPickerSearchContainerModel * _model;
}

@property (nonatomic, retain) NSString *queryString;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (Class)_classForChildren;
- (bool)hideSearchField;
- (id)init;
- (id)initWithModel:(id)arg1;
- (void)itemsOrSelectionDidChange:(bool)arg1;
- (id)queryString;
- (void)setQueryString:(id)arg1;

@end
