
@interface TIMecabraSegment : NSObject {
    NSString * _reading;
    NSString * _surface;
}

@property (nonatomic, retain) NSString *reading;
@property (nonatomic, retain) NSString *surface;

+ (void)splitSegments:(id)arg1 at:(int)arg2 forPrefix:(id*)arg3 forSuffix:(id*)arg4;

- (void).cxx_destruct;
- (id)reading;
- (void)setReading:(id)arg1;
- (void)setSurface:(id)arg1;
- (id)surface;

@end
