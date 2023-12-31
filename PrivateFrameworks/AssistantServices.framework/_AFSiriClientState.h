
@interface _AFSiriClientState : NSObject {
    bool  _hasActiveSession;
    bool  _isListening;
    bool  _isSpeaking;
    NSMutableSet * _requestUUIDs;
}

@property (nonatomic) bool hasActiveSession;
@property (nonatomic) bool isListening;
@property (nonatomic) bool isSpeaking;
@property (nonatomic, readonly) unsigned long long notifyState;

- (void).cxx_destruct;
- (void)addRequestUUID:(id)arg1;
- (bool)hasActiveSession;
- (id)init;
- (bool)isListening;
- (bool)isSpeaking;
- (unsigned long long)notifyState;
- (void)removeRequestUUID:(id)arg1;
- (void)setHasActiveSession:(bool)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setIsSpeaking:(bool)arg1;

@end
