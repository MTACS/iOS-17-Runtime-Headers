
@interface NELoopbackConnection : NSObject {
    unsigned long long  _blobSizes;
    NSObject<OS_nw_context> * _context;
    unsigned long long  _currentBlobSizeIndex;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  _currentInputFrames;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  _protocol;
    unsigned long long  _totalBytesReceived;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
