
@protocol CKFeedCollectionViewLayoutDatasource <NSObject>

@required

- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 forFeedLayout:(CKFeedCollectionViewLayout *)arg2;
- (unsigned long long)numberOfSectionsInFeedLayout:(CKFeedCollectionViewLayout *)arg1;

@end
