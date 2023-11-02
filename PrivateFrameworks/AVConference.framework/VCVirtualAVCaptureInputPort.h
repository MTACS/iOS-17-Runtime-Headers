
@interface VCVirtualAVCaptureInputPort : AVCaptureInputPort {
    struct OpaqueCMClock { } * _clock;
    NSMutableArray * _connections;
    VCWeakObjectHolder * _input;
    NSString * _mediaType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic) struct OpaqueCMClock { }*clock;
@property (nonatomic, retain) AVCaptureInput *input;
@property (nonatomic, copy) NSString *mediaType;

- (void)addConnection:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (id)connections;
- (void)dealloc;
- (void)disconnect;
- (id)initWithDevice:(id)arg1 mediaType:(id)arg2;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)mediaType;
- (void)setClock:(struct OpaqueCMClock { }*)arg1;
- (void)setInput:(id)arg1;
- (void)setMediaType:(id)arg1;

@end
