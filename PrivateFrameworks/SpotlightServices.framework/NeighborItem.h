
@interface NeighborItem : NSObject {
    double  _distance;
    NSString * _neighbor;
    unsigned long long  _position;
    long long  _type;
}

@property (nonatomic) double distance;
@property (nonatomic, retain) NSString *neighbor;
@property (nonatomic) unsigned long long position;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (double)distance;
- (id)initWithNeighbor:(id)arg1 type:(long long)arg2 distance:(double)arg3 position:(unsigned long long)arg4;
- (id)neighbor;
- (unsigned long long)position;
- (void)setDistance:(double)arg1;
- (void)setNeighbor:(id)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
