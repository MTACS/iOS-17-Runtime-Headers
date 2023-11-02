
@interface KVItemInfo : NSObject <NSCopying> {
    KVItem * _item;
    NSString * _originAppId;
    KVPriorInfo * _priorInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithItem:(id)arg1 originAppId:(id)arg2;
- (id)initWithItem:(id)arg1 originAppId:(id)arg2 priorInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemInfo:(id)arg1;
- (id)item;
- (id)itemId;
- (long long)itemType;
- (id)originAppId;
- (id)priorInfo;
- (void)setPriorInfo:(id)arg1;
- (id)unindexedFields;
- (id)unindexedFieldsWithType:(long long)arg1;

@end
