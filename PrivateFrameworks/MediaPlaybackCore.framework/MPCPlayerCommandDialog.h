
@interface MPCPlayerCommandDialog : NSObject {
    NSArray * _actions;
    MPRemoteCommandHandlerDialog * _dialog;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *localizedMessage;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (id)initWithMPDialog:(id)arg1 request:(id)arg2;
- (id)localizedMessage;
- (id)localizedTitle;

@end
