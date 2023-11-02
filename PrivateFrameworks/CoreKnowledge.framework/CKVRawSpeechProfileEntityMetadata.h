
@interface CKVRawSpeechProfileEntityMetadata : NSObject <NSCopying> {
    unsigned long long  _categoryIndex;
    NSString * _itemId;
    KVPriorInfo * _priorInfo;
}

@property (nonatomic, readonly) unsigned long long categoryIndex;
@property (nonatomic, readonly) NSString *itemId;
@property (nonatomic, readonly) KVPriorInfo *priorInfo;

- (void).cxx_destruct;
- (unsigned long long)categoryIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCategoryIndex:(unsigned long long)arg1 itemId:(id)arg2 priorInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRawSpeechProfileEntityMetadata:(id)arg1;
- (id)itemId;
- (id)priorInfo;

@end
