
@interface CKAttributedStringItemProvider : NSObject <NSItemProviderWriting> {
    NSAttributedString * _attributedString;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)attributedString;
- (id)initWithAttributedString:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)writableTypeIdentifiersForItemProvider;

@end
