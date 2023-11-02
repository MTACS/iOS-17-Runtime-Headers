
@interface _BlastDoorLPVideo : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    NSURL * _fileURL;
    bool  _hasAudio;
    _BlastDoorLPVideoProperties * _properties;
    NSURL * _streamingURL;
    NSURL * _youTubeURL;
}

@property (nonatomic, copy) NSString *MIMEType;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic) bool hasAudio;
@property (nonatomic, copy) _BlastDoorLPVideoProperties *properties;
@property (nonatomic, retain) NSURL *streamingURL;
@property (nonatomic, retain) NSURL *youTubeURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (unsigned long long)_encodedSize;
- (id)_initWithVideo:(id)arg1;
- (bool)_shouldEncodeData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (bool)hasAudio;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasAudio:(bool)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setStreamingURL:(id)arg1;
- (void)setYouTubeURL:(id)arg1;
- (id)streamingURL;
- (id)youTubeURL;

@end
