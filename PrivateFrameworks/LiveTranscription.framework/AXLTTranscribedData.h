
@interface AXLTTranscribedData : NSObject <NSSecureCoding> {
    NSString * _appID;
    NSString * _appName;
    long long  _downloadProgress;
    NSArray * _nonUpdatingSegments;
    int  _pid;
    long long  _requestType;
    bool  _silence;
    NSDate * _timestamp;
    NSString * _transcribedText;
    AXLTTranscription * _transcription;
}

@property (nonatomic, retain) NSString *appID;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic) long long downloadProgress;
@property (nonatomic, retain) NSArray *nonUpdatingSegments;
@property (nonatomic) int pid;
@property (nonatomic) long long requestType;
@property (getter=isSilence, nonatomic) bool silence;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *transcribedText;
@property (nonatomic, retain) AXLTTranscription *transcription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appID;
- (id)appName;
- (long long)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTranscribedText:(id)arg1 requestType:(long long)arg2 timestamp:(id)arg3 pid:(int)arg4 appID:(id)arg5 appName:(id)arg6 downloadProgress:(long long)arg7 silence:(bool)arg8;
- (id)initWithTranscription:(id)arg1 requestType:(long long)arg2 timestamp:(id)arg3 pid:(int)arg4 appID:(id)arg5 appName:(id)arg6 downloadProgress:(long long)arg7 silence:(bool)arg8;
- (bool)isSilence;
- (id)nonUpdatingSegments;
- (int)pid;
- (long long)requestType;
- (void)setAppID:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setDownloadProgress:(long long)arg1;
- (void)setNonUpdatingSegments:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setSilence:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTranscribedText:(id)arg1;
- (void)setTranscription:(id)arg1;
- (id)timestamp;
- (id)transcribedText;
- (id)transcription;

@end
