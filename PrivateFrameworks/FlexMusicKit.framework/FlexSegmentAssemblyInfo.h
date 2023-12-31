
@interface FlexSegmentAssemblyInfo : NSObject {
    long long  _barsUsed;
    long long  _duration;
    long long  _offset;
    FlexSegment * _segment;
    NSURL * _url;
}

@property (nonatomic) long long barsUsed;
@property (nonatomic) long long duration;
@property (nonatomic) long long offset;
@property (nonatomic, retain) FlexSegment *segment;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (long long)barsUsed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)duration;
- (long long)offset;
- (id)segment;
- (void)setBarsUsed:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (void)setOffset:(long long)arg1;
- (void)setSegment:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
