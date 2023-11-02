
@interface boringssl_concrete_boringssl_identity : NSObject <OS_boringssl_identity> {
    NSObject<OS_sec_array> * certificates;
    id /* block */  decrypt_block;
    NSObject<OS_dispatch_data> * decryption_result;
    NSObject<OS_sec_identity> * identity;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * private_key;
    bool  private_key_operation_complete;
    NSObject<OS_dispatch_queue> * queue;
    id /* block */  sign_block;
    NSObject<OS_dispatch_data> * signature_result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
