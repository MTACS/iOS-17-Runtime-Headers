
@interface PXSidebarItemChildInfo : NSObject {
    long long  _childIndexInFetchResult;
    PHCollection * _collection;
    PHFetchResult * _fetchResult;
}

@property (nonatomic, readonly) long long childIndexInFetchResult;
@property (nonatomic, readonly) PHCollection *collection;
@property (nonatomic, readonly) PHFetchResult *fetchResult;

- (void).cxx_destruct;
- (long long)childIndexInFetchResult;
- (id)collection;
- (id)fetchResult;
- (id)initWithListItem:(id)arg1 dataSection:(id)arg2 childIndex:(long long)arg3;

@end
