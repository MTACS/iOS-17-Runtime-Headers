
@interface WLSocketCommandMessage : WLSocketMessage {
    NSString * _command;
}

@property (nonatomic, copy) NSString *command;

- (void).cxx_destruct;
- (id)command;
- (id)initWithCommandString:(id)arg1;
- (void)setCommand:(id)arg1;

@end
