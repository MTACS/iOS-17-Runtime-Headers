
@interface DOCHotFolderEvent : DOCFrecencyBasedEvent {
    NSString * _appBundleIdentifier;
    FPItem * _folderItem;
    NSNumber * _rowId;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) FPItem *folderItem;
@property (nonatomic, retain) NSNumber *rowId;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)folderItem;
- (id)initWithAppBundleIdentifier:(id)arg1 folderItem:(id)arg2 type:(unsigned long long)arg3 lastUsedDate:(id)arg4 frecency:(double)arg5;
- (id)initWithRowId:(id)arg1 appBundleIdentifier:(id)arg2 folderItem:(id)arg3 type:(unsigned long long)arg4 lastUsedDate:(id)arg5 frecency:(double)arg6;
- (id)rowId;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setFolderItem:(id)arg1;
- (void)setRowId:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
