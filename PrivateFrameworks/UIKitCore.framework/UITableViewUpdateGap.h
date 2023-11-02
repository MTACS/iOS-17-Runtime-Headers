
@interface UITableViewUpdateGap : NSObject {
    NSMutableArray * _deleteItems;
    UIUpdateItem * _firstUpdateItem;
    struct { 
        unsigned int hasAutomaticAnimationItems : 1; 
    }  _gapFlags;
    NSMutableArray * _insertItems;
    UIUpdateItem * _lastUpdateItem;
}

- (void).cxx_destruct;
- (id)description;

@end
