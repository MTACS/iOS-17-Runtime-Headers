
@interface SRFetchRequest : NSObject {
    SRDevice * _device;
    double  _from;
    double  _to;
}

@property (retain) SRDevice *device;
@property double from;
@property double to;

- (void)dealloc;
- (id)device;
- (double)from;
- (id)init;
- (void)setDevice:(id)arg1;
- (void)setFrom:(double)arg1;
- (void)setTo:(double)arg1;
- (double)to;

@end
