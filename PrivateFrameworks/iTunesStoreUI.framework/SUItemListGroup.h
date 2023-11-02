
@interface SUItemListGroup : NSObject {
    NSMutableArray * _items;
    SUItem * _separatorItem;
}

@property (nonatomic, readonly) NSString *indexBarTitle;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) SUItem *separatorItem;

- (void)dealloc;
- (id)description;
- (id)indexBarTitle;
- (id)items;
- (id)separatorItem;
- (void)setItems:(id)arg1;
- (void)setSeparatorItem:(id)arg1;

@end
