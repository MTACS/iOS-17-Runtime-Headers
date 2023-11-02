
@interface AXLTAudioInfo : NSObject {
    NSArray * _audioHistogram;
    int  _pid;
    long long  _requestType;
}

@property (nonatomic, retain) NSArray *audioHistogram;
@property (nonatomic) int pid;
@property (nonatomic) long long requestType;

- (void).cxx_destruct;
- (id)audioHistogram;
- (id)initWithAudioInfo:(id)arg1 requestType:(long long)arg2 pid:(int)arg3;
- (int)pid;
- (long long)requestType;
- (void)setAudioHistogram:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setRequestType:(long long)arg1;

@end
