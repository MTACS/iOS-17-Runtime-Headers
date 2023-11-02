
@interface RCPMovie : NSObject {
    unsigned long long  _endTimestamp;
    RCPEventStream * _eventStream;
    long long  _interfaceOrientation;
    AVAsset * _screenRecording;
    UIImage * _screenshot;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    NSArray * _snapshots;
    unsigned long long  _startTimestamp;
}

@property (nonatomic, readonly) unsigned long long endTimestamp;
@property (nonatomic, retain) RCPEventStream *eventStream;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, retain) AVAsset *screenRecording;
@property (nonatomic, retain) UIImage *screenshot;
@property (nonatomic, retain) NSArray *snapshots;
@property (nonatomic, readonly) unsigned long long startTimestamp;

+ (struct __CVBuffer { }*)pixelBufferFromUIImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3;

- (void).cxx_destruct;
- (id)encodeToXPC;
- (unsigned long long)endTimestamp;
- (id)eventStream;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithEventStream:(id)arg1 snapshots:(id)arg2;
- (id)initWithXPC:(id)arg1;
- (long long)interfaceOrientation;
- (id)screenRecording;
- (id)screenshot;
- (void)setEventStream:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setScreenRecording:(id)arg1;
- (void)setScreenshot:(id)arg1;
- (void)setSnapshots:(id)arg1;
- (id)snapshots;
- (unsigned long long)startTimestamp;
- (id)trimmedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)writeToURL:(id)arg1 completion:(id /* block */)arg2;

@end
