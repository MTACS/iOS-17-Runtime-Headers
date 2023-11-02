
@interface BackendXPC : NSObject <NSCoding, NSSecureCoding> {
    struct shared_ptr<Backend> { 
        struct Backend {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _backend;
    struct unique_ptr<crypto::header, std::default_delete<crypto::header>> { 
        struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> { 
            struct header {} *__value_; 
        } __ptr_; 
    }  _cryptoHeader;
}

@property (nonatomic) struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; } backend;
@property (nonatomic, readonly) void*cryptoHeader;
@property (nonatomic, readonly, copy) NSUUID *instanceID;

+ (id)newFileBackendWithURL:(id)arg1 fileOpenFlags:(int)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })backend;
- (void*)cryptoHeader;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct keys { struct vector<std::byte, std::allocator<std::byte>> { unsigned char *x_1_1_1; unsigned char *x_1_1_2; struct __compressed_pair<std::byte *, std::allocator<std::byte>> { unsigned char *x_3_2_1; } x_1_1_3; } x1; struct vector<std::byte, std::allocator<std::byte>> { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<std::byte *, std::allocator<std::byte>> { unsigned char *x_3_2_1; } x_2_1_3; } x2; struct unique_ptr<crypto::header, std::default_delete<crypto::header>> { struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> { struct header {} *x_1_2_1; } x_3_1_1; } x3; struct vector<crypto::password_header, std::allocator<crypto::password_header>> { struct password_header {} *x_4_1_1; struct password_header {} *x_4_1_2; struct __compressed_pair<crypto::password_header *, std::allocator<crypto::password_header>> { struct password_header {} *x_3_2_1; } x_4_1_3; } x4; })generateNewImageKeysWithPassphrase:(const char *)arg1 privateKey:(struct __SecKey { }*)arg2 pubKeyHeader:(struct public_key_header { struct _publicKeyHash { struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x_1_2_1; } x_1_1_1; struct Wrapper<unsigned char[32], std::integral_constant<bool, true>, print_as_buffer<unsigned char[32]>> { unsigned char x_2_2_1[32]; } x_1_1_2; } x1; struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x_2_1_1; } x2; struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x_3_1_1; } x3; struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x_4_1_1; } x4; struct _encryptedBlob { struct Wrapper<unsigned int, std::integral_constant<bool, true>, be_type> { unsigned int x_1_2_1; } x_5_1_1; struct Wrapper<unsigned char[512], std::integral_constant<bool, true>, print_as_buffer<unsigned char[512]>> { unsigned char x_2_2_1[512]; } x_5_1_2; } x5; })arg3 header_backend:(struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })arg4;
- (struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })getCryptoHeaderBackend;
- (bool)getPrivateKeyWithHeader:(void*)arg1 privateKey:(struct __SecKey {}**)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isUnlocked;
- (int)lock;
- (struct shared_ptr<crypto::format> { struct format {} *x1; struct __shared_weak_count {} *x2; })makeCryptoFormatWithIsNewImage:(bool)arg1 pass:(const char *)arg2 certificate:(id)arg3 error:(id*)arg4;
- (bool)newUnlockBackendXPCValidateArgsWithPassphrase:(const char *)arg1 certificate:(id)arg2 isNewImage:(bool)arg3 error:(id*)arg4;
- (id)newUnlockedBackendXPCWithPassphrase:(const char *)arg1 certificate:(id)arg2 isNewImage:(bool)arg3 error:(id*)arg4;
- (id)newWithCryptoFormat:(const void*)arg1;
- (void)replaceWithBackendXPC:(id)arg1;
- (void)setBackend:(struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)tryCreatingCryptoHeader;

@end
