
@interface _RCSAudioFile : NSObject <RCSAudioFile> {
    RCSSavedRecordingAccessToken * _fileToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVAudioFormat *fileFormat;
@property (nonatomic, retain) RCSSavedRecordingAccessToken *fileToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVAudioFormat *processingFormat;
@property (nonatomic, readonly) NSDictionary *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)fileFormat;
- (id)fileToken;
- (id)processingFormat;
- (void)setFileToken:(id)arg1;
- (id)settings;
- (id)url;

@end
