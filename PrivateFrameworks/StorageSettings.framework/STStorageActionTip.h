
@interface STStorageActionTip : STStorageTip {
    NSArray * _significantItems;
}

@property Class detailControllerClass;
@property (copy) NSArray *significantItems;

- (void).cxx_destruct;
- (Class)detailControllerClass;
- (id)init;
- (void)setDetailControllerClass:(Class)arg1;
- (void)setSignificantItems:(id)arg1;
- (id)significantItems;

@end
