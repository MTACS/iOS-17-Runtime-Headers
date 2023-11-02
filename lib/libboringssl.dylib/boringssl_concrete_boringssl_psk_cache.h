
@interface boringssl_concrete_boringssl_psk_cache : NSObject <OS_boringssl_psk_cache> {
    boringssl_concrete_boringssl_ctx * context;
    NSObject<OS_sec_array> * list;
    id /* block */  psk_selection_block;
    NSObject<OS_dispatch_queue> * psk_selection_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
