
@interface TabContextMenuIdentifier : NSObject <NSCopying> {
    <TabCollectionItem> * _sourceItem;
    NSUUID * _tabUUID;
}

@property (nonatomic, readonly) <TabCollectionItem> *sourceItem;
@property (nonatomic, readonly) NSUUID *tabUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithTabUUID:(id)arg1 sourceItem:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sourceItem;
- (id)tabUUID;

@end
