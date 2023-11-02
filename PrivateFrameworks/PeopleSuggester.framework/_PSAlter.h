
@interface _PSAlter : NSObject {
    double  _distanceToCluster;
    NSString * _name;
    double  _timeSinceLastContact;
}

@property (nonatomic) double distanceToCluster;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) double timeSinceLastContact;

- (void).cxx_destruct;
- (double)distanceToCluster;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 andDistance:(double)arg2 andTime:(double)arg3;
- (id)name;
- (void)setDistanceToCluster:(double)arg1;
- (void)setTimeSinceLastContact:(double)arg1;
- (double)timeSinceLastContact;

@end
