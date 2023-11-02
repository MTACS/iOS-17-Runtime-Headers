
@interface SGSuggestionCategoryList : NSObject {
    NSString * _listTitle;
    bool  _supportsDismissAll;
}

@property (nonatomic, copy) NSString *listTitle;
@property (nonatomic) bool supportsDismissAll;

- (void).cxx_destruct;
- (id)init;
- (id)listTitle;
- (void)setListTitle:(id)arg1;
- (void)setSupportsDismissAll:(bool)arg1;
- (bool)supportsDismissAll;

@end
