
@interface UIDictationCommandHandlerManager : NSObject {
    NSMutableDictionary * _commandHandlers;
}

@property (nonatomic, retain) NSMutableDictionary *commandHandlers;

+ (id)commandHandlerWithLocale:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_commandHandlerWithLocale:(id)arg1;
- (id)commandHandlers;
- (id)init;
- (void)setCommandHandlers:(id)arg1;

@end
