
@interface MPCPlayerCommandRequest : NSObject {
    unsigned int  _command;
    MPCMediaRemoteController * _controller;
    NSString * _label;
    NSDictionary * _options;
    NSString * _originalLabel;
    MPCPlayerPath * _playerPath;
    id /* block */  _statusTransformer;
    NSDictionary * _userInitiatedOptions;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly, copy) NSString *originalLabel;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (nonatomic, copy) id /* block */ statusTransformer;
@property (nonatomic, copy) NSDictionary *userInitiatedOptions;

- (void).cxx_destruct;
- (unsigned int)command;
- (id)controller;
- (id)description;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 controller:(id)arg3 label:(id)arg4;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4;
- (id)label;
- (id)options;
- (id)originalLabel;
- (id)playerPath;
- (void)setCommandOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1;
- (void)setStatusTransformer:(id /* block */)arg1;
- (void)setUserInitiatedOptions:(id)arg1;
- (id /* block */)statusTransformer;
- (id)userInitiatedOptions;

@end
