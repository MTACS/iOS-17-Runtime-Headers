
@interface _PXTrackedMediaRecord : NSObject {
    id  _media;
    long long  _mediaKind;
    double  _timestamp;
}

@property (nonatomic, readonly) id media;
@property (nonatomic, readonly) long long mediaKind;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMedia:(id)arg1 mediaKind:(long long)arg2 timestamp:(double)arg3;
- (id)media;
- (long long)mediaKind;
- (double)timestamp;

@end
