
@interface GTReplayUpdateLibrary : GTReplayRequest <NSSecureCoding> {
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    NSData * _shaderIR;
    NSString * _shaderSource;
    NSURL * _shaderURL;
    unsigned long long  _streamRef;
}

@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic, retain) NSData *shaderIR;
@property (nonatomic, retain) NSString *shaderSource;
@property (nonatomic, retain) NSURL *shaderURL;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setShaderIR:(id)arg1;
- (void)setShaderSource:(id)arg1;
- (void)setShaderURL:(id)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (id)shaderIR;
- (id)shaderSource;
- (id)shaderURL;
- (unsigned long long)streamRef;

@end
