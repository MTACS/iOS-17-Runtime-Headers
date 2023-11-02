
@interface CVAFeatureBuffer : NSObject <NSSecureCoding> {
    unsigned long long  _bytesPerRow;
    bool  _compressed;
    NSData * _data;
    unsigned long long  _frameId;
    unsigned long long  _height;
    unsigned long long  _original_width;
    struct __CVBuffer { } * _pixelBufferRef;
    bool  _reduce;
    NSString * _sourceStreamID;
    unsigned long long  _syncTimestamp;
    double  _timestamp;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) bool compressed;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long original_width;
@property (nonatomic) struct __CVBuffer { }*pixelBufferRef;
@property (nonatomic) bool reduce;
@property (nonatomic, retain) NSString *sourceStreamID;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long width;

+ (id)classes;
+ (id)streamName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bytesPerRow;
- (bool)compressed;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (struct __CVBuffer { }*)getPixelBuffer;
- (struct __CVBuffer { }*)getPixelBuffer:(bool)arg1;
- (struct __CVBuffer { }*)getPixelBufferCopy;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBufferRef:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 streamID:(id)arg3;
- (id)initWithPixelBufferRef:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 streamID:(id)arg3 reduce:(bool)arg4 compress:(bool)arg5;
- (unsigned long long)original_width;
- (struct __CVBuffer { }*)pixelBufferRef;
- (bool)reduce;
- (id)reduceBuffer:(void*)arg1;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setOriginal_width:(unsigned long long)arg1;
- (void)setPixelBufferRef:(struct __CVBuffer { }*)arg1;
- (void)setReduce:(bool)arg1;
- (void)setSourceStreamID:(id)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (bool)shouldReduce:(void*)arg1;
- (id)sourceStreamID;
- (unsigned long long)syncTimestamp;
- (double)timestamp;
- (unsigned long long)width;

@end
