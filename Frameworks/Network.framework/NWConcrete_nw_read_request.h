
@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request> {
    char * buffer;
    id /* block */  buffer_completion;
    NWConcrete_nw_connection * connection;
    NSObject<OS_nw_content_context> * context;
    NSObject<OS_nw_array> * context_array;
    NSObject<OS_dispatch_data> * data;
    id /* block */  data_completion;
    id /* block */  data_multiple_completion;
    NSObject<OS_nw_error> * error;
    NSObject<OS_nw_fd_wrapper> * fd;
    unsigned int  file_finished;
    id /* block */  file_handler;
    unsigned int  file_progress_started;
    unsigned int  is_complete;
    unsigned long long  max;
    unsigned long long  min;
    NWConcrete_nw_read_request * next;
    unsigned long long  progress;
    unsigned int  progress_msecs;
    void * progress_timer_source;
    unsigned int  qos_class;
    NSObject<OS_nw_array> * read_array;
    NSObject<OS_nw_content_context> * repliable_message;
    unsigned int  reported;
    NWConcrete_nw_read_request * tail;
    int  variant;
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
