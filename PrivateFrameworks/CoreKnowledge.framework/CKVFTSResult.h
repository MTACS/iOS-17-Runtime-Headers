
@interface CKVFTSResult : NSObject <NSCopying> {
    KVItem * _item;
    NSString * _originAppId;
    NSUUID * _recordId;
    CKVSearchField * _searchField;
}

@property (nonatomic, readonly) KVItem *item;
@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) NSUUID *recordId;
@property (nonatomic, readonly) CKVSearchField *searchField;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1 originAppId:(id)arg2 searchField:(id)arg3 recordId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFTSResult:(id)arg1;
- (id)item;
- (id)originAppId;
- (id)recordId;
- (id)searchField;

@end
