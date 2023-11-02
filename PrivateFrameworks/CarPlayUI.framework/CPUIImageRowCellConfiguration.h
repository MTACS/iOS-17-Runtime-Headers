
@interface CPUIImageRowCellConfiguration : NSObject <CPUIImageRowCellConfigurationProtocol> {
    NSArray * _artworkCatalogs;
    bool  _enabled;
    NSArray * _images;
    id /* block */  _selectGridItemBlock;
    id /* block */  _selectTitleBlock;
    bool  _showActivityIndicator;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *artworkCatalogs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *images;
@property (nonatomic, copy) id /* block */ selectGridItemBlock;
@property (nonatomic, copy) id /* block */ selectTitleBlock;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(id /* block */)arg3 selectTitleBlock:(id /* block */)arg4;
+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(id /* block */)arg3 selectTitleBlock:(id /* block */)arg4 showActivityIndicator:(bool)arg5;
+ (id)configurationWithText:(id)arg1 artworkCatalogs:(id)arg2 selectGridItemBlock:(id /* block */)arg3 selectTitleBlock:(id /* block */)arg4 showActivityIndicator:(bool)arg5 enabled:(bool)arg6;
+ (id)configurationWithText:(id)arg1 images:(id)arg2 selectGridItemBlock:(id /* block */)arg3 selectTitleBlock:(id /* block */)arg4 showActivityIndicator:(bool)arg5;
+ (id)configurationWithText:(id)arg1 images:(id)arg2 selectGridItemBlock:(id /* block */)arg3 selectTitleBlock:(id /* block */)arg4 showActivityIndicator:(bool)arg5 enabled:(bool)arg6;

- (void).cxx_destruct;
- (id)artworkCatalogs;
- (bool)enabled;
- (id)images;
- (id /* block */)selectGridItemBlock;
- (id /* block */)selectTitleBlock;
- (void)setArtworkCatalogs:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImages:(id)arg1;
- (void)setSelectGridItemBlock:(id /* block */)arg1;
- (void)setSelectTitleBlock:(id /* block */)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showActivityIndicator;
- (id)title;

@end
