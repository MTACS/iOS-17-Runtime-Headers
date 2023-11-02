
@interface ManagedOutputStream : NSObject {
    NSUUID * _attributedClientID;
    bool  _controllerPaused;
    PHASEExternalOutputStreamDefinition * _definition;
    id /* block */  _renderBlock;
    bool  _streamPaused;
}

@property (nonatomic, retain) NSUUID *attributedClientID;
@property (getter=isControllerPaused, nonatomic) bool controllerPaused;
@property (nonatomic, retain) PHASEExternalOutputStreamDefinition *definition;
@property (nonatomic, copy) id /* block */ renderBlock;
@property (getter=isStreamPaused, nonatomic) bool streamPaused;

- (void).cxx_destruct;
- (id)attributedClientID;
- (id)definition;
- (id)initWithPaused:(bool)arg1 attributedTo:(id)arg2 definition:(id)arg3 renderBlock:(id /* block */)arg4;
- (bool)isControllerPaused;
- (bool)isStreamPaused;
- (id /* block */)renderBlock;
- (void)setAttributedClientID:(id)arg1;
- (void)setControllerPaused:(bool)arg1;
- (void)setDefinition:(id)arg1;
- (void)setRenderBlock:(id /* block */)arg1;
- (void)setStreamPaused:(bool)arg1;

@end
