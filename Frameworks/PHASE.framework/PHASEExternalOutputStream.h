
@interface PHASEExternalOutputStream : PHASEExternalStream {
    PHASEExternalOutputStreamDefinition * _definition;
    id /* block */  _renderBlock;
}

@property (nonatomic, readonly) PHASEExternalOutputStreamDefinition *definition;

+ (id)new;
+ (void)streamWithEngine:(id)arg1 definition:(id)arg2 startsPaused:(bool)arg3 delegate:(id)arg4 renderBlock:(id /* block */)arg5 callback:(id /* block */)arg6;
+ (void)streamWithEngine:(id)arg1 uuid:(id)arg2 definition:(id)arg3 startsPaused:(bool)arg4 delegate:(id)arg5 renderBlock:(id /* block */)arg6 callback:(id /* block */)arg7;

- (void).cxx_destruct;
- (id)definition;
- (id)description;
- (id)init;
- (id)initWithStreamGroupUUID:(id)arg1 streamUUID:(id)arg2 engine:(id)arg3 streamDefinition:(id)arg4 startsPaused:(bool)arg5 delegate:(id)arg6 renderBlock:(id /* block */)arg7;

@end
