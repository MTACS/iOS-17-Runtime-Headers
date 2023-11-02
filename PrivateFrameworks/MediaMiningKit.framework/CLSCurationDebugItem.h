
@interface CLSCurationDebugItem : CLSCurationDebugObject {
    CLSCurationDebugItem * _dedupedDebugItem;
    unsigned long long  _dedupingType;
    <CLSCurationItem> * _item;
}

@property (nonatomic, retain) <CLSCurationItem> *item;

+ (id)stringForDedupingType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2;
- (id)identifier;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)timestamp;

@end
