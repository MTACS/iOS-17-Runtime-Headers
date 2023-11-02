
@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration {
    NSNumber * _timeStamp;
}

@property (nonatomic, copy) NSNumber *timeStamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;

@end
