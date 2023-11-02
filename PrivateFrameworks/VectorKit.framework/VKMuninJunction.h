
@interface VKMuninJunction : NSObject {
    NSString * _name;
    NSMutableArray * _roads;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *roads;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMuninJunction:(const void*)arg1 localize:(bool)arg2;
- (id)name;
- (id)roads;

@end
