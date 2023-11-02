
@interface SHDataCompression : NSObject <SHDataStream> {
    int  _algorithm;
    <SHDataStream> * _next;
    int  _operation;
    struct { 
        char *dst_ptr; 
        unsigned long long dst_size; 
        char *src_ptr; 
        unsigned long long src_size; 
        void *state; 
    }  _stream;
}

@property (nonatomic) int algorithm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SHDataStream> *next;
@property (nonatomic) int operation;
@property (nonatomic, readonly) struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; } stream;
@property (readonly) Class superclass;

+ (int)supportedCompressionTypeFromFilePathExtension:(id)arg1;
+ (int)supportedCompressionTypeFromFileURL:(id)arg1;

- (void).cxx_destruct;
- (int)algorithm;
- (bool)closeWithError:(id*)arg1;
- (void)dealloc;
- (id)initForCompressionWithAlgorithm:(int)arg1;
- (id)initForDecompressionWithAlgorithm:(int)arg1;
- (id)initWithOperation:(int)arg1 algorithm:(int)arg2;
- (id)next;
- (int)operation;
- (bool)performOperation:(int)arg1 withData:(id)arg2 algorithm:(int)arg3 flags:(int)arg4 error:(id*)arg5;
- (bool)processData:(id)arg1 error:(id*)arg2;
- (void)setAlgorithm:(int)arg1;
- (void)setNext:(id)arg1;
- (void)setOperation:(int)arg1;
- (bool)setup;
- (struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; })stream;

@end
