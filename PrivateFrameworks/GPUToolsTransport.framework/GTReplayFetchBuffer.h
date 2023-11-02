
@interface GTReplayFetchBuffer : GTReplayRequest <NSSecureCoding> {
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    struct GTRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _streamRef;
}

@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic) struct GTRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct GTRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setRange:(struct GTRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (unsigned long long)streamRef;

@end
