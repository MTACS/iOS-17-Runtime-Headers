
@interface PKTranscriptionResult : NSObject {
    bool  _didShowHUD;
    NSString * _transcription;
}

@property (nonatomic, readonly) bool didShowHUD;
@property (nonatomic, readonly, copy) NSString *transcription;

- (void).cxx_destruct;
- (bool)didShowHUD;
- (id)initWithTranscription:(id)arg1 didShowHUD:(bool)arg2;
- (id)transcription;

@end
