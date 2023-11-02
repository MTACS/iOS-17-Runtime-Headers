
@interface MNAudioSystemEvent : NSObject {
    unsigned long long  _guidanceLevel;
    id /* block */  _handler;
    bool  _isPrivate;
    unsigned long long  _shortPrompt;
    NSString * _utterance;
}

@property (nonatomic, readonly) unsigned long long guidanceLevel;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) bool hasSoundEffect;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) unsigned long long shortPrompt;
@property (nonatomic, readonly, copy) NSString *utterance;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)guidanceLevel;
- (id /* block */)handler;
- (bool)hasSoundEffect;
- (id)initWithUtterance:(id)arg1 andShortPrompt:(unsigned long long)arg2 andVoiceGuidanceLevel:(unsigned long long)arg3 andCompletion:(id /* block */)arg4;
- (bool)isEqualToEvent:(id)arg1;
- (bool)isPrivate;
- (unsigned long long)shortPrompt;
- (id)utterance;

@end
