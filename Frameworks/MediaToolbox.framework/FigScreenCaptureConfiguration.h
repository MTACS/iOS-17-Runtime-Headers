
@interface FigScreenCaptureConfiguration : NSObject {
    struct __CFDictionary { } * _fvdOptions;
    struct OpaqueFigSimpleMutex { } * _lock;
    unsigned long long  _preset;
}

@property (nonatomic) NSString *clientName;
@property (nonatomic) id contentIDs;
@property (nonatomic) long long imagePoolSize;
@property (nonatomic) bool includePrivateContent;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameInterval;
@property (nonatomic) long long numOfIdleFrames;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long preset;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (id)clientName;
- (id)contentIDs;
- (void)dealloc;
- (id)description;
- (struct __CFDictionary { }*)getFVDOptions;
- (struct OpaqueFigSimpleMutex { }*)getLock;
- (long long)imagePoolSize;
- (bool)includePrivateContent;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameInterval;
- (long long)numOfIdleFrames;
- (unsigned int)pixelFormat;
- (unsigned long long)preset;
- (void)setClientName:(id)arg1;
- (void)setContentIDs:(id)arg1;
- (void)setImagePoolSize:(long long)arg1;
- (void)setIncludePrivateContent:(bool)arg1;
- (void)setMinFrameInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNumOfIdleFrames:(long long)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPreset:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
