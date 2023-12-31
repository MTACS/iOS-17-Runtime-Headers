
@interface UIIndexBarDisplayEntry : NSObject {
    long long  _displayEntryIndex;
    UIIndexBarEntry * _entry;
    long long  _entryIndex;
}

@property (nonatomic) long long displayEntryIndex;
@property (nonatomic, retain) UIIndexBarEntry *entry;
@property (nonatomic) long long entryIndex;

- (void).cxx_destruct;
- (id)description;
- (long long)displayEntryIndex;
- (id)entry;
- (long long)entryIndex;
- (void)setDisplayEntryIndex:(long long)arg1;
- (void)setEntry:(id)arg1;
- (void)setEntryIndex:(long long)arg1;

@end
