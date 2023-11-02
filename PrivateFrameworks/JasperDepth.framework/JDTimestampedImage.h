
@interface JDTimestampedImage : NSObject {
    struct __CVBuffer { } * _image;
    NSDictionary * _metadataDictionary;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic, readonly) struct __CVBuffer { }*image;
@property (nonatomic, readonly) NSDictionary *metadataDictionary;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { }*)image;
- (id)initWithImage:(struct __CVBuffer { }*)arg1 andTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithImage:(struct __CVBuffer { }*)arg1 metadataDictionary:(id)arg2 andTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)metadataDictionary;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
