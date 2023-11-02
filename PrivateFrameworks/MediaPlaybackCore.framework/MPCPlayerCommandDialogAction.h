
@interface MPCPlayerCommandDialogAction : NSObject {
    MPRemoteCommandHandlerDialogAction * _action;
    MPCMediaRemoteController * _controller;
}

@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)commandRequest;
- (id)description;
- (id)initWithMPAction:(id)arg1 request:(id)arg2;
- (id)localizedTitle;
- (long long)type;

@end
