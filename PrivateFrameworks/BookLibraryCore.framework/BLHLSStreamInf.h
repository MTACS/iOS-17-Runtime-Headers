
@interface BLHLSStreamInf : NSObject {
    NSString * _audio;
    unsigned long long  _averageBandwidth;
    unsigned long long  _bandwidth;
    NSString * _codecs;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *audio;
@property (nonatomic, readonly) unsigned long long averageBandwidth;
@property (nonatomic, readonly) unsigned long long averageBandwidthFallbackToPeak;
@property (nonatomic, readonly) unsigned long long bandwidth;
@property (nonatomic, readonly) NSString *codecs;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)audio;
- (unsigned long long)averageBandwidth;
- (unsigned long long)averageBandwidthFallbackToPeak;
- (unsigned long long)bandwidth;
- (id)codecs;
- (id)description;
- (void)setPropertiesFromAttributeList:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
