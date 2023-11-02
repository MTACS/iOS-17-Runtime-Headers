
@interface _UIKeyShortcutHUDIndexPath : NSObject {
    <_UIKeyShortcutHUDCollectionViewManagerClient> * _client;
    NSIndexPath * _indexPath;
}

@property (nonatomic) <_UIKeyShortcutHUDCollectionViewManagerClient> *client;
@property (nonatomic, retain) NSIndexPath *indexPath;

+ (id)hudIndexPathWithClient:(id)arg1 indexPath:(id)arg2;

- (void).cxx_destruct;
- (id)client;
- (unsigned long long)hash;
- (id)indexPath;
- (bool)isEqual:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setIndexPath:(id)arg1;

@end
