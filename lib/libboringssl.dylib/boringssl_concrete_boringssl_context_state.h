
@interface boringssl_concrete_boringssl_context_state : NSObject <OS_boringssl_context_state> {
    unsigned char  cached_content_type;
    struct ssl_ctx_st { } * ssl_ctx;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;

@end
