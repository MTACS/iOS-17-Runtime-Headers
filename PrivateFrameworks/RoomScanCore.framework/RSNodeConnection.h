
@interface RSNodeConnection : NSObject <RSNodeInputProducer, RSNodeOutputConsumer> {
    bool  _attached;
    RSNodeInput * _input;
    RSNodeOutput * _output;
}

@property (getter=isAttached, nonatomic, readonly) bool attached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RSNodeInput *input;
@property (nonatomic, readonly) RSNodeOutput *output;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (bool)attachWithError:(id*)arg1;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (bool)detachWithError:(id*)arg1;
- (id)init;
- (id)initWithOutput:(id)arg1 input:(id)arg2;
- (id)input;
- (bool)isAttached;
- (id)output;

@end
