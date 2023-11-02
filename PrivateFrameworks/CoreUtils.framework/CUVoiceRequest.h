
@interface CUVoiceRequest : NSObject {
    id /* block */  _completion;
    unsigned int  _flags;
    id  _owner;
    VSSpeechRequest * _speechRequest;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) unsigned int flags;
@property (nonatomic, retain) id owner;
@property (nonatomic, retain) VSSpeechRequest *speechRequest;

- (void).cxx_destruct;
- (id /* block */)completion;
- (unsigned int)flags;
- (id)owner;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setOwner:(id)arg1;
- (void)setSpeechRequest:(id)arg1;
- (id)speechRequest;

@end
