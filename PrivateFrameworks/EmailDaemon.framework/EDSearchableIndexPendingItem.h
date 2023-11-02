
@interface EDSearchableIndexPendingItem : NSObject {
    NSString * _identifier;
    NSMutableArray * _items;
    <EDIndexableItem> * _referenceItem;
}

@property (nonatomic, readonly) unsigned long long estimatedSizeInBytes;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, readonly) <EDIndexableItem> *referenceItem;
@property (nonatomic, readonly) bool requiresPreprocessing;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addPendingItem:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)estimatedSizeInBytes;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)referenceItem;
- (bool)requiresPreprocessing;
- (void)setItems:(id)arg1;

@end
