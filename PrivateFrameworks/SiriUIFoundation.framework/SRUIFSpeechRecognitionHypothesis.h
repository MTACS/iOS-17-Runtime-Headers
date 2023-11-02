
@interface SRUIFSpeechRecognitionHypothesis : NSObject <NSCopying> {
    AceObject * _backingAceObject;
    bool  _final;
    AFUserUtterance * _userUtterance;
}

@property (nonatomic, readonly) AceObject *backingAceObject;
@property (getter=isFinal, nonatomic, readonly) bool final;
@property (nonatomic, readonly) AFUserUtterance *userUtterance;

- (void).cxx_destruct;
- (id)backingAceObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithUserUtterance:(id)arg1 backingAceObject:(id)arg2 isFinal:(bool)arg3;
- (bool)isFinal;
- (id)userUtterance;

@end
