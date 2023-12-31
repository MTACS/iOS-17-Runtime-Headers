
@interface VSKeychainFetchRequest : NSObject <NSCopying> {
    unsigned long long  _fetchLimit;
    bool  _includesDataValues;
    VSOptional * _itemKind;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) bool includesDataValues;
@property (nonatomic, retain) VSOptional *itemKind;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic, copy) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fetchLimit;
- (bool)includesDataValues;
- (id)init;
- (id)itemKind;
- (id)predicate;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setIncludesDataValues:(bool)arg1;
- (void)setItemKind:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
