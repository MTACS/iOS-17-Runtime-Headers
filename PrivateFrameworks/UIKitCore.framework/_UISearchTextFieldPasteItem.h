
@interface _UISearchTextFieldPasteItem : UITextPasteItem <UISearchTextFieldPasteItem> {
    UISearchToken * _searchTokenResult;
}

@property (setter=setSearchTokenResult:, nonatomic, retain) UISearchToken *_searchTokenResult;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) id localObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_searchTokenResult;
- (void)setSearchTokenResult:(id)arg1;

@end
