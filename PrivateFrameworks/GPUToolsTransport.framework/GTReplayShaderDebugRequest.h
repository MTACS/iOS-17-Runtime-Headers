
@interface GTReplayShaderDebugRequest : GTReplayRequest <NSSecureCoding> {
    id /* block */  _completionHandler;
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    NSData * _programData;
    int  _programDataVersion;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic, retain) NSData *programData;
@property (nonatomic) int programDataVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)programData;
- (int)programDataVersion;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setProgramData:(id)arg1;
- (void)setProgramDataVersion:(int)arg1;

@end
