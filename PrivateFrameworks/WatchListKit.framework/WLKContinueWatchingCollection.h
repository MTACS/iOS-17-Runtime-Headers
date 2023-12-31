
@interface WLKContinueWatchingCollection : NSObject {
    NSString * _collectionID;
    NSArray * _items;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *collectionID;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)collectionID;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)items;
- (id)title;

@end
