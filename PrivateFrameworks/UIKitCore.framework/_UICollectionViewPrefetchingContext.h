
@interface _UICollectionViewPrefetchingContext : NSObject {
    NSMutableArray * _items;
    NSMutableDictionary * _itemsDict;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _prefetchRect;
    NSArray * _remainingIndexPaths;
}

- (void).cxx_destruct;

@end
