
@interface VSWebAuthenticationViewModel : VSViewModel {
    VSMessageQueue * _messagesFromWeb;
    VSMessageQueue * _messagesToWeb;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) VSMessageQueue *messagesFromWeb;
@property (nonatomic, readonly) VSMessageQueue *messagesToWeb;
@property (nonatomic, copy) NSURL *sourceURL;

- (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)init;
- (id)messagesFromWeb;
- (id)messagesToWeb;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
