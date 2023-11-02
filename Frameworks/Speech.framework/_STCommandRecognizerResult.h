
@interface _STCommandRecognizerResult : NSObject <NSCopying> {
    NSArray * _transcriptionCommands;
}

@property (nonatomic, readonly) NSArray *transcriptionCommands;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTranscriptionCommands:(id)arg1;
- (id)transcriptionCommands;

@end
