
@interface MADHEICSAlphaSequenceTranscoder : NSObject {
    struct CF<CMPhotoCompressionSession *> { 
        struct CMPhotoCompressionSession {} *value_; 
    }  _compressionSession;
    NSObject<OS_dispatch_group> * _encodeGroup;
    NSObject<OS_dispatch_queue> * _encodeQueue;
    NSObject<OS_dispatch_semaphore> * _encodeSemaphore;
    long long  _frameCount;
    NSArray * _frameProperties;
    unsigned long long  _maxDimension;
    double  _qualityValue;
    struct CF<CMPhotoDecompressionContainer *> { 
        struct CMPhotoDecompressionContainer {} *value_; 
    }  _sequenceContainer;
    NSData * _sequenceData;
    long long  _sequenceIndex;
    struct CF<CMPhotoDecompressionSession *> { 
        struct CMPhotoDecompressionSession {} *value_; 
    }  _source;
    struct CF<CMPhotoDecompressionContainer *> { 
        struct CMPhotoDecompressionContainer {} *value_; 
    }  _sourceContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_addFrameToSequence:(long long)arg1 basePixelBuffer:(struct __CVBuffer { }*)arg2 alphaPixelBuffer:(struct __CVBuffer { }*)arg3 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (int)_decodeFrameIndex:(unsigned long long)arg1 basePixelBuffer:(struct __CVBuffer {}**)arg2 alphaPixelBuffer:(struct __CVBuffer {}**)arg3 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (int)_setupTranscode;
- (int)_transcode;
- (id)initWithSequenceData:(id)arg1 maxDimension:(unsigned long long)arg2 qualityValue:(double)arg3;
- (id)run;

@end
