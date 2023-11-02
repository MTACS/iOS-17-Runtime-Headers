
@interface CKVLocalItemInstance : CKVSharedItem {
    NSNumber * _instanceIdentifier;
}

@property (nonatomic, readonly) NSNumber *instanceIdentifier;
@property (nonatomic, readonly) <CKVUnifiedMetaContentDataType><CKVUnifiedContentDataType> *item;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithContentHash:(id)arg1 instanceHash:(id)arg2 instance:(id)arg3;
- (id)instanceIdentifier;

@end
