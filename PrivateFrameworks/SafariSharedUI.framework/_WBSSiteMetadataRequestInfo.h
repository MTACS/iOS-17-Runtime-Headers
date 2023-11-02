
@interface _WBSSiteMetadataRequestInfo : NSObject {
    NSOperation * _operation;
    <WBSSiteMetadataProvider> * _provider;
    NSMutableSet * _tokens;
}

@property (nonatomic) NSOperation *operation;
@property (nonatomic, readonly) <WBSSiteMetadataProvider> *provider;
@property (nonatomic, readonly) NSMutableSet *tokens;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;
- (id)operation;
- (id)provider;
- (void)setOperation:(id)arg1;
- (id)tokens;

@end
