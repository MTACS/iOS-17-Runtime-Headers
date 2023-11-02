
@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request> {
    unsigned int  complete;
    id /* block */  completion;
    NWConcrete_nw_connection * connection;
    unsigned long long  consumed_bytes;
    NSObject<OS_nw_content_context> * context;
    NSObject<OS_dispatch_data> * data;
    NSObject<OS_nw_fd_wrapper> * fd;
    unsigned int  file_finished;
    id /* block */  file_handler;
    unsigned int  file_progress_started;
    unsigned int  idempotent;
    NWConcrete_nw_write_request * next;
    unsigned long long  num_bytes;
    NSObject<OS_nw_content_context> * original_message;
    unsigned int  progress_msecs;
    void * progress_timer_source;
    unsigned int  qos_class;
    double  relative_priority;
    unsigned int  reported;
    NWConcrete_nw_write_request * tail;
    unsigned int  write_close;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
