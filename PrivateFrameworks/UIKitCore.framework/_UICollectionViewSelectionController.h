
@interface _UICollectionViewSelectionController : NSObject {
    bool  _allowsMultipleSelection;
    NSMutableSet * _highlightedIndexPaths;
    NSMutableSet * _nonvisibleTrackedSelectedIdentifiers;
    NSMutableSet * _selectedIndexPaths;
}

- (void).cxx_destruct;
- (id)init;

@end
