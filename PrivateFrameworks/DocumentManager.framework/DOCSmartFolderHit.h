
@interface DOCSmartFolderHit : DOCFrecencyBasedEvent {
    FPItem * _folderItem;
    NSNumber * _rowId;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, copy) FPItem *folderItem;
@property (nonatomic, retain) NSNumber *rowId;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)folderItem;
- (id)initWithFolder:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3 lastUsedDate:(id)arg4 frecency:(double)arg5;
- (id)initWithRowId:(id)arg1 folder:(id)arg2 type:(unsigned long long)arg3 value:(id)arg4 lastUsedDate:(id)arg5 frecency:(double)arg6;
- (id)rowId;
- (void)setFolderItem:(id)arg1;
- (void)setRowId:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
