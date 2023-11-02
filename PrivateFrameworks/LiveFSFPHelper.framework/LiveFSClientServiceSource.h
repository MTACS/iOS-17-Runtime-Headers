
@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {
    LiveFSFPExtensionHelper * ex;
    NSString * ident;
}

@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;

@end
