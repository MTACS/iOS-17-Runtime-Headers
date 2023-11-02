
@interface AVTAvatarPickerDataSource : NSObject {
    <AVTAvatarListItem> * _addItem;
    bool  _allowAddItem;
    AVTUIEnvironment * _environment;
    NSArray * _items;
    AVTAvatarRecordDataSource * _recordDataSource;
}

@property (nonatomic, retain) <AVTAvatarListItem> *addItem;
@property (nonatomic) bool allowAddItem;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *recordDataSource;
@property (nonatomic, readonly) <AVTAvatarStore> *store;

- (void).cxx_destruct;
- (id)addItem;
- (bool)allowAddItem;
- (bool)canCreateMemoji;
- (id)environment;
- (long long)indexOfAddItem;
- (id)initWithRecordDataSource:(id)arg1 environment:(id)arg2 allowAddItem:(bool)arg3;
- (bool)isItemAtIndexAddItem:(long long)arg1;
- (id)itemAtIndex:(long long)arg1;
- (id)items;
- (long long)numberOfItems;
- (id)recordDataSource;
- (void)reloadModel;
- (void)setAddItem:(id)arg1;
- (void)setAllowAddItem:(bool)arg1;
- (void)setItems:(id)arg1;
- (id)store;

@end
