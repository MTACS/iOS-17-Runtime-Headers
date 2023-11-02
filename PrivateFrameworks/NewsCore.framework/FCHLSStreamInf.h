
@interface FCHLSStreamInf : NSObject {
    NSString * _audio;
    unsigned long long  _averageBandwidth;
    unsigned long long  _bandwidth;
    NSString * _codecs;
    NSURL * _url;
}

- (void).cxx_destruct;
- (id)description;

@end
