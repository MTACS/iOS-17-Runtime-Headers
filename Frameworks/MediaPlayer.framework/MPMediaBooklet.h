
@interface MPMediaBooklet : NSObject {
    long long  fileSize;
    unsigned long long  itemPersistentID;
    NSString * name;
    NSString * redownloadParams;
    long long  storeItemID;
}

@property (nonatomic) long long fileSize;
@property (nonatomic) unsigned long long itemPersistentID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *redownloadParams;
@property (nonatomic) long long storeItemID;

- (void).cxx_destruct;
- (id)description;
- (long long)fileSize;
- (unsigned long long)itemPersistentID;
- (id)name;
- (id)redownloadParams;
- (void)setFileSize:(long long)arg1;
- (void)setItemPersistentID:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRedownloadParams:(id)arg1;
- (void)setStoreItemID:(long long)arg1;
- (long long)storeItemID;

@end
