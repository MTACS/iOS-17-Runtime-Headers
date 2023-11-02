
@interface NWConcrete_nw_txt_record : NSObject <OS_nw_txt_record> {
    unsigned int  __pad_bits;
    char * buffer;
    unsigned long long  data_len;
    unsigned int  is_dictionary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned long long  max_data_len;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)init;

@end
