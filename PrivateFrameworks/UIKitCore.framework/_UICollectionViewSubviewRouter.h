
@interface _UICollectionViewSubviewRouter : NSObject {
    NSMutableArray * _bookmarks;
    UIView * _container;
    UIView * _managedUpdateView;
    NSMapTable * _subviewToBookmarkMap;
    bool  _useLegacyRouting;
}

- (void).cxx_destruct;
- (id)description;
- (bool)shouldAddSubview:(id)arg1 atPosition:(long long*)arg2 relativeTo:(id)arg3;
- (bool)shouldBringSubviewToFront:(id)arg1;
- (bool)shouldExchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (bool)shouldSendSubviewToBack:(id)arg1;
- (void)willRemoveSubview:(id)arg1;

@end
