
@interface SRCSCommandRecognizer : NSObject {
    bool  _active;
    SRCSCommandRecognitionSystem * _commandRecognitionSystem;
    NSArray * _spokenCommands;
}

@property bool active;

- (void).cxx_destruct;
- (bool)active;
- (id)commandRecognitionSystem;
- (id)initWithCommandRecognitionSystem:(id)arg1 commandIdentifiers:(id)arg2;
- (id)initWithCommandRecognitionSystem:(id)arg1 spokenCommands:(id)arg2;
- (void)setActive:(bool)arg1;
- (id)spokenCommands;

@end
