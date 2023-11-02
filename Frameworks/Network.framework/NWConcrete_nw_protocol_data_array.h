
@interface NWConcrete_nw_protocol_data_array : NSObject <OS_nw_protocol_data_array> {
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  frame_array;
    unsigned int  frame_count;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;

@end
