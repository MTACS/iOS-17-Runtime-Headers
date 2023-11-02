
@interface CLPCUserClient : NSObject {
    struct CLPC { 
        int (**_vptr$Object)(); 
        unsigned int object; 
        unsigned int connect; 
        struct unique_ptr<char[], std::default_delete<char[]>> { 
            struct __compressed_pair<char *, std::default_delete<char[]>> { 
                char *__value_; 
            } __ptr_; 
        } rpc_buffer; 
        unsigned long long rpc_buffer_size; 
    }  clpc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)init:(id*)arg1;
- (unsigned long long)isInGameMode:(id*)arg1;
- (unsigned long long)isInLowPowerMode:(id*)arg1;
- (unsigned long long)isInSustainableMode:(id*)arg1;
- (id)reportingObfuscationData:(id*)arg1;
- (bool)setGameMode:(bool)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setGameModeOnProcess:(bool)arg1 targetProcess:(int)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)setLowPowerMode:(bool)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setSustainableMode:(bool)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
