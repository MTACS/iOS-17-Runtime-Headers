
@interface FPTestingIngestion : FPTestingOperation <NSFileProviderTestingIngestion> {
    <NSFileProviderItem> * _item;
    NSString * _itemIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSFileProviderItem> *item;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) unsigned long long side;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asIngestion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationIdentifier:(id)arg1 itemIdentifier:(id)arg2 item:(id)arg3;
- (id)item;
- (id)itemIdentifier;
- (unsigned long long)side;
- (long long)type;

@end
