
@interface PHPickerResult : NSObject {
    long long  __sourceType;
    NSString * _itemIdentifier;
    NSItemProvider * _itemProvider;
}

@property (nonatomic, readonly) long long _sourceType;
@property (nonatomic, readonly) NSString *assetIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSItemProvider *itemProvider;

- (void).cxx_destruct;
- (id)_initWithItemProvider:(id)arg1 assetIdentifier:(id)arg2;
- (id)_initWithItemProvider:(id)arg1 itemIdentifier:(id)arg2 sourceType:(long long)arg3;
- (long long)_sourceType;
- (id)assetIdentifier;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)itemProvider;

@end
