
@interface VKMuninRoad : NSObject {
    NSString * _roadName;
}

@property (nonatomic, readonly) NSString *roadName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedName:(const char *)arg1;
- (id)initWithMuninRoadEdge:(const void*)arg1 localize:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)roadName;

@end
