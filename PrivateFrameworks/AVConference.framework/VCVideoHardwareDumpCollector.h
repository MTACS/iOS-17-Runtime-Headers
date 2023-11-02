
@interface VCVideoHardwareDumpCollector : NSObject {
    struct __CFArray { } * _captureDumpHeaders;
    struct __CFDictionary { } * _captureFrameData;
    struct __CFArray { } * _rxDumpHeaders;
    struct __CFDictionary { } * _rxFrameData;
    struct __CFArray { } * _txDumpHeaders;
    struct __CFDictionary { } * _txFrameData;
    VCVideoHardwareDumpWriter * _writer;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
