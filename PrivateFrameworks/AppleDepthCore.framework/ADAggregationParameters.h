
@interface ADAggregationParameters : NSObject {
    unsigned int  _aggregationSize;
    double  _maxPointCloudAge;
}

@property (nonatomic) unsigned int aggregationSize;
@property (nonatomic) double maxPointCloudAge;

// Image: /System/Library/PrivateFrameworks/AppleDepthCore.framework/AppleDepthCore

- (unsigned int)aggregationSize;
- (double)maxPointCloudAge;
- (void)setAggregationSize:(unsigned int)arg1;
- (void)setMaxPointCloudAge:(double)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (bool)ar_isEqualToParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
