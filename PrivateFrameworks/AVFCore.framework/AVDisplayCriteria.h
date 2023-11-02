
@interface AVDisplayCriteria : NSObject <NSCopying> {
    AVDisplayCriteriaInternal * _displayCriteria;
    float  _refreshRate;
    int  _videoDynamicRange;
}

@property (nonatomic, readonly) float refreshRate;
@property (readonly) int videoDynamicRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithRefreshRate:(float)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2;
- (bool)isEqual:(id)arg1;
- (float)refreshRate;
- (int)videoDynamicRange;

@end
