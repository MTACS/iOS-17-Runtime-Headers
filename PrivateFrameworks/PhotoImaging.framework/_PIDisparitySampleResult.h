
@interface _PIDisparitySampleResult : _NURenderResult <PIDisparitySampleResult> {
    float  _sampledDisparityValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float sampledDisparityValue;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (id)initWithDisparityValue:(float)arg1;
- (float)sampledDisparityValue;

@end
