
@interface HFFakeMediaAccessoryItemProvider : HFItemProvider {
    NSMutableSet * _mediaAccessoryItemTypes;
    NSMutableSet * _mediaAccessoryItems;
}

@property (nonatomic, retain) NSMutableSet *mediaAccessoryItemTypes;
@property (nonatomic, retain) NSMutableSet *mediaAccessoryItems;

- (void).cxx_destruct;
- (id)init;
- (id)items;
- (id)mediaAccessoryItemTypes;
- (id)mediaAccessoryItems;
- (id)reloadItems;
- (void)setMediaAccessoryItemTypes:(id)arg1;
- (void)setMediaAccessoryItems:(id)arg1;

@end
