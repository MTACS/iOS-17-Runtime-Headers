
@interface boringssl_concrete_boringssl_psk : NSObject <OS_boringssl_psk> {
    NSObject<OS_dispatch_data> * identity;
    NSObject<OS_dispatch_data> * key;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
