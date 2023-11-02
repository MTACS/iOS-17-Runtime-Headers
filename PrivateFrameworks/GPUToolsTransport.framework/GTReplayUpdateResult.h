
@interface GTReplayUpdateResult : GTReplayRequest <NSSecureCoding> {
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    NSError * _error;
    unsigned long long  _streamRef;
    NSDictionary * _updatePipelines;
}

@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic, retain) NSDictionary *updatePipelines;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setError:(id)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (void)setUpdatePipelines:(id)arg1;
- (unsigned long long)streamRef;
- (id)updatePipelines;

@end
