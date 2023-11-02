
@interface DYDataFunctionStream : DYFunctionStream {
    NSData * _data;
    struct _Iterator<GPUTools::FD::Function> { 
        struct Function { 
            struct CoreFunction { 
                unsigned int fenum; 
                unsigned int flags; 
                unsigned short padding; 
                unsigned short argument_count; 
                union { 
                    unsigned long long context_id; 
                    unsigned long long receiver_id; 
                } ; 
                struct Argument { 
                    void *value; 
                    unsigned int core_type; 
                    unsigned int sem_type; 
                    unsigned int size; 
                    unsigned short length; 
                    unsigned short flags; 
                } return_value; 
                struct Argument { 
                    void *value; 
                    unsigned int core_type; 
                    unsigned int sem_type; 
                    unsigned int size; 
                    unsigned short length; 
                    unsigned short flags; 
                } arguments[16]; 
                unsigned int fbuf_size; 
                unsigned int internal_buffer_size; 
                void *fbuf; 
                void *internal_buffer; 
            } core; 
            unsigned long long timestamp; 
            unsigned long long duration; 
            unsigned long long *backtrace; 
            unsigned short backtrace_length; 
            unsigned short gl_error; 
            int events_type; 
            void *events; 
            unsigned int events_size; 
            unsigned int queue_width; 
            unsigned long long queue_id; 
            unsigned long long thread_id; 
            struct Function {} *next_associated; 
            void *sm_context; 
        } _function; 
        void *_encbuf; 
        void *_next; 
        void *_end; 
        struct IFunctionDecoder {} *_decoder; 
        bool _fast_size; 
    }  _iter;
    struct _Iterator<GPUTools::FD::Function> { 
        struct Function { 
            struct CoreFunction { 
                unsigned int fenum; 
                unsigned int flags; 
                unsigned short padding; 
                unsigned short argument_count; 
                union { 
                    unsigned long long context_id; 
                    unsigned long long receiver_id; 
                } ; 
                struct Argument { 
                    void *value; 
                    unsigned int core_type; 
                    unsigned int sem_type; 
                    unsigned int size; 
                    unsigned short length; 
                    unsigned short flags; 
                } return_value; 
                struct Argument { 
                    void *value; 
                    unsigned int core_type; 
                    unsigned int sem_type; 
                    unsigned int size; 
                    unsigned short length; 
                    unsigned short flags; 
                } arguments[16]; 
                unsigned int fbuf_size; 
                unsigned int internal_buffer_size; 
                void *fbuf; 
                void *internal_buffer; 
            } core; 
            unsigned long long timestamp; 
            unsigned long long duration; 
            unsigned long long *backtrace; 
            unsigned short backtrace_length; 
            unsigned short gl_error; 
            int events_type; 
            void *events; 
            unsigned int events_size; 
            unsigned int queue_width; 
            unsigned long long queue_id; 
            unsigned long long thread_id; 
            struct Function {} *next_associated; 
            void *sm_context; 
        } _function; 
        void *_encbuf; 
        void *_next; 
        void *_end; 
        struct IFunctionDecoder {} *_decoder; 
        bool _fast_size; 
    }  _reset;
    struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stream;
}

@property (nonatomic, readonly, retain) NSData *data;
@property (nonatomic, readonly) bool swapsByteOrder;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearResetMarker;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 header:(const void*)arg2 error:(id*)arg3;
- (const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)peekFunction;
- (const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)readFunction;
- (unsigned long long)readFunctions:(struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg1 maxCount:(unsigned long long)arg2;
- (void)reset;
- (bool)resetToFunction:(const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)arg1;
- (void)setResetMarker;
- (bool)swapsByteOrder;

@end
