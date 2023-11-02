
@interface _UICollectionViewSubviewManager : NSObject {
    NSMutableDictionary * _cells;
    NSMutableDictionary * _decorations;
    <_UICollectionViewSubviewManagerDelegate> * _delegate;
    bool  _indexPathValidationEnabled;
    NSMutableDictionary * _supplementaries;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
