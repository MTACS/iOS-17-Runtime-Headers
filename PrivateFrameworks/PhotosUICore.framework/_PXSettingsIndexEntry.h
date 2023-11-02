
@interface _PXSettingsIndexEntry : NSObject {
    NSIndexPath * _indexPath;
    _PXSettingsIndexEntry * _parentEntry;
    NSString * _rowTitle;
    NSString * _sectionTitle;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) _PXSettingsIndexEntry *parentEntry;
@property (nonatomic, readonly) NSString *rowTitle;
@property (nonatomic, readonly) NSString *sectionTitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (id)_cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
+ (id)_titleForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;

- (void).cxx_destruct;
- (void)_revealInSettingsController:(id)arg1 drillIn:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_revealInTopOfSettingsController:(id)arg1 drillIn:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)indexPath;
- (id)initWithRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (bool)matchesSearchString:(id)arg1;
- (id)parentEntry;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)rowTitle;
- (id)sectionTitle;
- (void)setParentEntry:(id)arg1;
- (id)subtitle;
- (id)title;

@end
