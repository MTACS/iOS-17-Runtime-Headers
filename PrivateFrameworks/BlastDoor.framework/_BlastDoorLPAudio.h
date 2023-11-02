
@interface _BlastDoorLPAudio : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    _BlastDoorLPAudioProperties * _properties;
    NSURL * _streamingURL;
}

@property (nonatomic, retain) NSString *MIMEType;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) _BlastDoorLPAudioProperties *properties;
@property (nonatomic, retain) NSURL *streamingURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (unsigned long long)_encodedSize;
- (id)_initWithAudio:(id)arg1;
- (bool)_shouldEncodeData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (void)setData:(id)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setStreamingURL:(id)arg1;
- (id)streamingURL;

@end
