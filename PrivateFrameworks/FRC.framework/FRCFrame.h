
@interface FRCFrame : NSObject {
    struct __CVBuffer { } * _buffer;
    NSDictionary * _info;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
}

@property (nonatomic, readonly) struct __CVBuffer { }*buffer;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)buffer;
- (void)dealloc;
- (id)info;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 info:(id)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;

@end
