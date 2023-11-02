
@interface GEOPhoneNumberResolver : NSObject {
    PNRPhoneNumberResolver * _resolver;
}

+ (id)sharedResolver;

- (void).cxx_destruct;
- (id)init;
- (void)resolvePhoneNumbers:(id)arg1 handler:(id /* block */)arg2 queue:(id)arg3;

@end
