
@interface VUIMediaEntityFetchResponse : NSObject <NSCopying> {
    NSArray * _grouping;
    NSArray * _groupingSortIndexes;
    bool  _hasDataForCheckHasItemsOption;
    NSArray * _mediaEntities;
    unsigned long long  _mediaEntitySubtype;
    NSArray * _sortIndexes;
}

@property (nonatomic, copy) NSArray *grouping;
@property (nonatomic, copy) NSArray *groupingSortIndexes;
@property (nonatomic) bool hasDataForCheckHasItemsOption;
@property (nonatomic, copy) NSArray *mediaEntities;
@property (nonatomic) unsigned long long mediaEntitySubtype;
@property (nonatomic, copy) NSArray *sortIndexes;

- (void).cxx_destruct;
- (bool)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)grouping;
- (id)groupingSortIndexes;
- (bool)hasDataForCheckHasItemsOption;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mediaEntities;
- (unsigned long long)mediaEntitySubtype;
- (void)setGrouping:(id)arg1;
- (void)setGroupingSortIndexes:(id)arg1;
- (void)setHasDataForCheckHasItemsOption:(bool)arg1;
- (void)setMediaEntities:(id)arg1;
- (void)setMediaEntitySubtype:(unsigned long long)arg1;
- (void)setSortIndexes:(id)arg1;
- (id)sortIndexes;

@end
