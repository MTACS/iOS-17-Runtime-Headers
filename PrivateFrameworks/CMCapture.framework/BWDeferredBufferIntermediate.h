
@interface BWDeferredBufferIntermediate : BWDeferredIntermediate {
    NSDictionary * _attributes;
    struct __CVBuffer { } * _buffer;
    unsigned long long  _bufferType;
    unsigned long long  _captureFrameFlags;
    int  _compressionProfile;
    NSString * _mainRawThumbnailBufferTag;
    NSString * _mainRawThumbnailMetadataTag;
    NSString * _metadataTag;
    NSString * _portType;
    NSString * _rawThumbnailsBufferTag;
    NSString * _rawThumbnailsMetadataTag;
    NSString * _sifrRawThumbnailBufferTag;
    NSString * _sifrRawThumbnailMetadataTag;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) struct __CVBuffer { }*buffer;
@property (nonatomic, readonly) unsigned long long bufferType;
@property (nonatomic, readonly) unsigned long long captureFrameFlags;
@property (nonatomic, readonly) int compressionProfile;
@property (nonatomic, readonly) NSString *mainRawThumbnailBufferTag;
@property (nonatomic, readonly) NSString *mainRawThumbnailMetadataTag;
@property (nonatomic, readonly) NSString *metadataTag;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) NSString *rawThumbnailsBufferTag;
@property (nonatomic, readonly) NSString *rawThumbnailsMetadataTag;
@property (nonatomic, readonly) NSString *sifrRawThumbnailBufferTag;
@property (nonatomic, readonly) NSString *sifrRawThumbnailMetadataTag;

+ (bool)supportsSecureCoding;

- (id)_shortString;
- (id)archive:(int*)arg1;
- (id)attributes;
- (struct __CVBuffer { }*)buffer;
- (unsigned long long)bufferType;
- (unsigned long long)captureFrameFlags;
- (int)compressionProfile;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchAndRetain:(int*)arg1;
- (int)flush;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 captureFrameFlags:(unsigned long long)arg4 metadataTag:(id)arg5 portType:(id)arg6 compressionProfile:(int)arg7 URL:(id)arg8;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 captureFrameFlags:(unsigned long long)arg4 metadataTag:(id)arg5 rawThumbnailsBufferTag:(id)arg6 rawThumbnailsMetadataTag:(id)arg7 mainRawThumbnailBufferTag:(id)arg8 mainRawThumbnailMetadataTag:(id)arg9 sifrRawThumbnailBufferTag:(id)arg10 sifrRawThumbnailMetadataTag:(id)arg11 portType:(id)arg12 compressionProfile:(int)arg13 URL:(id)arg14;
- (id)initWithCoder:(id)arg1;
- (id)mainRawThumbnailBufferTag;
- (id)mainRawThumbnailMetadataTag;
- (id)metadataTag;
- (unsigned int)pixelFormat;
- (id)portType;
- (id)rawThumbnailsBufferTag;
- (id)rawThumbnailsMetadataTag;
- (void)releaseBuffer;
- (int)setBuffer:(struct __CVBuffer { }*)arg1;
- (int)setURL:(id)arg1 prefetchQueue:(id)arg2;
- (id)sifrRawThumbnailBufferTag;
- (id)sifrRawThumbnailMetadataTag;

@end
