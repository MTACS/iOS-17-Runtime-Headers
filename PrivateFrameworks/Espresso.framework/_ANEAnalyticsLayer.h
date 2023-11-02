
@interface _ANEAnalyticsLayer : NSObject {
    NSString * _layerName;
    NSNumber * _weight;
}

@property (nonatomic, readonly) NSString *layerName;
@property (nonatomic, readonly) NSNumber *weight;

+ (id)objectWithName:(id)arg1 weight:(id)arg2;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 weight:(id)arg2;
- (id)layerName;
- (id)serialize;
- (id)weight;

@end
