
@interface CAMTransientPairedVideo : NSObject {
    long long  _filterType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    NSURL * _url;
}

@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (long long)filterType;
- (id)initWithURL:(id)arg1 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 filterType:(long long)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (id)url;

@end