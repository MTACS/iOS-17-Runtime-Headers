
@interface BLHLSSegment : NSObject {
    double  _duration;
    BLHLSKey * _key;
    BLHLSMap * _map;
    NSURL * _url;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) BLHLSKey *key;
@property (nonatomic, readonly) BLHLSMap *map;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4;
- (id)key;
- (id)map;
- (id)url;

@end
