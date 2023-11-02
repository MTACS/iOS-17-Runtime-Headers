
@interface BLJaliscoBookletItem : NSObject {
    NSNumber * _size;
    NSString * _storeDownloadParameters;
    NSString * _storeID;
    NSString * _title;
}

@property (nonatomic, copy) NSNumber *size;
@property (nonatomic, copy) NSString *storeDownloadParameters;
@property (nonatomic, copy) NSString *storeID;
@property (nonatomic, copy) NSString *title;

+ (id)arrayWithServerBookletItems:(id)arg1;
+ (id)itemWithServerBookletItem:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setStoreDownloadParameters:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)size;
- (id)storeDownloadParameters;
- (id)storeID;
- (id)title;

@end
