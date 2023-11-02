
@interface PADFrame : NSObject {
    id  _buffer;
    NSArray * _faces;
    NSNumber * _gestureToDetect;
    unsigned int  _orientation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) struct __CVBuffer { }*buffer;
@property (nonatomic, retain) NSArray *faces;
@property (nonatomic, retain) NSNumber *gestureToDetect;
@property (nonatomic) unsigned int orientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) double timestamp;

+ (id)cvPixelBufferFromData:(id)arg1;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)buffer;
- (void)dealloc;
- (id)faces;
- (id)gestureToDetect;
- (id)init;
- (unsigned int)orientation;
- (void)setBuffer:(struct __CVBuffer { }*)arg1;
- (void)setFaces:(id)arg1;
- (void)setGestureToDetect:(id)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (double)timestamp;

@end
