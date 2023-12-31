
@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting> {
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)storageItemProviderWithString:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;

- (void)_loadPlainTextData:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)setString:(id)arg1;
- (id)string;

@end
