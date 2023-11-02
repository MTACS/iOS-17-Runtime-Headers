
@interface DECompressWriter : NSObject <DEWriter> {
    bool  _compressed;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _stream;
    bool  _streamEnded;
    bool  _streamInitialized;
    NSObject<DEWriter> * _writer;
}

@property (nonatomic) bool compressed;
@property (nonatomic) struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } stream;
@property (nonatomic) bool streamEnded;
@property (nonatomic) bool streamInitialized;
@property (nonatomic, retain) NSObject<DEWriter> *writer;

+ (bool)isCompressed:(id)arg1;

- (void).cxx_destruct;
- (void)close;
- (id)compress:(id)arg1 finalize:(bool)arg2;
- (bool)compressed;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setStream:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; })arg1;
- (void)setStreamEnded:(bool)arg1;
- (void)setStreamInitialized:(bool)arg1;
- (void)setWriter:(id)arg1;
- (struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; })stream;
- (bool)streamEnded;
- (bool)streamInitialized;
- (void)writeData:(id)arg1;
- (id)writer;

@end
