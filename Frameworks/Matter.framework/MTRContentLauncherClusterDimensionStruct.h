
@interface MTRContentLauncherClusterDimensionStruct : NSObject <NSCopying> {
    NSNumber * _height;
    NSNumber * _metric;
    NSNumber * _width;
}

@property (nonatomic, copy) NSNumber *height;
@property (nonatomic, copy) NSNumber *metric;
@property (nonatomic, copy) NSNumber *width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)height;
- (id)init;
- (id)metric;
- (void)setHeight:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)width;

@end
