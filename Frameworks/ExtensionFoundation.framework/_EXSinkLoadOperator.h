
@interface _EXSinkLoadOperator : _EXLoadOperator <NSSecureCoding> {
    NSXPCListenerEndpoint * _endpoint;
}

@property (retain) NSXPCListenerEndpoint *endpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (void)setEndpoint:(id)arg1;

@end
