
@interface CSVTUITrainingResult : NSObject {
    int  _audioStatus;
    long long  _sessionId;
    int  _sessionStatus;
}

@property (nonatomic, readonly) int audioStatus;
@property (nonatomic, readonly) long long sessionId;
@property (nonatomic, readonly) int sessionStatus;

- (int)audioStatus;
- (id)initWithSessionId:(long long)arg1 sessionStatus:(int)arg2 audioStatus:(int)arg3;
- (long long)sessionId;
- (int)sessionStatus;

@end
