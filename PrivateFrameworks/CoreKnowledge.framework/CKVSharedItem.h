
@interface CKVSharedItem : NSObject {
    <CKVUnifiedContentDataType> * _item;
    NSNumber * _sharedIdentifier;
}

@property (nonatomic, readonly) <CKVUnifiedContentDataType> *item;
@property (nonatomic, readonly) NSNumber *sharedIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithContentHash:(id)arg1 content:(id)arg2;
- (id)item;
- (id)sharedIdentifier;

@end
