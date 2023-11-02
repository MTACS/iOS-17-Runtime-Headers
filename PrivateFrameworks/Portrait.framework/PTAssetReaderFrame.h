
@interface PTAssetReaderFrame : NSObject {
    struct __CVBuffer { } * _colorBuffer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _colorBufferPreferredTransform;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _colorBufferTime;
    struct __CVBuffer { } * _disparityBuffer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _disparityBufferPreferredTransform;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _disparityBufferTime;
    unsigned long long  _index;
    NSDictionary * _jsonFriendlyMetadata;
    NSDictionary * _metadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _metadataTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) struct __CVBuffer { }*colorBuffer;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } colorBufferPreferredTransform;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } colorBufferTime;
@property (nonatomic) struct __CVBuffer { }*disparityBuffer;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } disparityBufferPreferredTransform;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } disparityBufferTime;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSDictionary *jsonFriendlyMetadata;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } metadataTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)_jsonFriendlyObject:(id)arg1;
- (struct __CVBuffer { }*)colorBuffer;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })colorBufferPreferredTransform;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })colorBufferTime;
- (void)dealloc;
- (struct __CVBuffer { }*)disparityBuffer;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })disparityBufferPreferredTransform;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })disparityBufferTime;
- (unsigned long long)index;
- (id)initWithAssetReaderFrame:(id)arg1;
- (id)jsonFriendlyMetadata;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })metadataTime;
- (void)setColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setColorBufferPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setColorBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDisparityBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDisparityBufferPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDisparityBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setJsonFriendlyMetadata:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
