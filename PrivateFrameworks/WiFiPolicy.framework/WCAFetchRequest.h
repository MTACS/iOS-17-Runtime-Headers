
@interface WCAFetchRequest : NSObject <NSSecureCoding> {
    WCAAsset * _asset;
    id /* block */  _completionHandler;
}

@property (nonatomic, retain) WCAAsset *asset;
@property (nonatomic, copy) id /* block */ completionHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asset;
- (id /* block */)completionHandler;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
