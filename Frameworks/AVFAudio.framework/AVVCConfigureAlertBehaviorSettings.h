
@interface AVVCConfigureAlertBehaviorSettings : NSObject {
    long long  _startAlert;
    long long  _stopAlert;
    long long  _stopOnErrorAlert;
    unsigned long long  _streamID;
}

@property (nonatomic) long long startAlert;
@property (nonatomic) long long stopAlert;
@property (nonatomic) long long stopOnErrorAlert;
@property (nonatomic) unsigned long long streamID;

- (id)initWithStreamID:(unsigned long long)arg1;
- (void)setStartAlert:(long long)arg1;
- (void)setStopAlert:(long long)arg1;
- (void)setStopOnErrorAlert:(long long)arg1;
- (void)setStreamID:(unsigned long long)arg1;
- (long long)startAlert;
- (long long)stopAlert;
- (long long)stopOnErrorAlert;
- (unsigned long long)streamID;

@end
