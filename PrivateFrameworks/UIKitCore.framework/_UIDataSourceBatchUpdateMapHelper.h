
@interface _UIDataSourceBatchUpdateMapHelper : NSObject {
    _UIDataSourceSnapshotter * _finalSnapshot;
    _UIDataSourceSnapshotter * _initialSnapshot;
    NSArray * _updateItems;
    struct _UIDataSourceUpdateMaps { 
        unsigned int oldSectionCount; 
        unsigned int newSectionCount; 
        unsigned int oldGlobalItemCount; 
        unsigned int newGlobalItemCount; 
        unsigned int *oldSectionMap; 
        unsigned int *newSectionMap; 
        unsigned int *oldGlobalItemMap; 
        unsigned int *newGlobalItemMap; 
        bool updatesAreInvalid; 
    }  _updateMaps;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
