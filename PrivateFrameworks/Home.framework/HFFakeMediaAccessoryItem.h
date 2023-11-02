
@interface HFFakeMediaAccessoryItem : HFItem {
    long long  _mediaAccessoryItemType;
}

@property (nonatomic) long long mediaAccessoryItemType;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItemsWithOptions:(id)arg1;
- (id)description;
- (id)initWithMediaAccessoryItemType:(long long)arg1;
- (long long)mediaAccessoryItemType;
- (void)setMediaAccessoryItemType:(long long)arg1;

@end
