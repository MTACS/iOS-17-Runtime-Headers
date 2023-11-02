
@interface _PSKNNeighbor : NSObject {
    double  _distance;
    NSArray * _nodeData;
}

@property (nonatomic) double distance;
@property (nonatomic, retain) NSArray *nodeData;

- (void).cxx_destruct;
- (double)distance;
- (id)initWithNodeData:(id)arg1 distance:(double)arg2;
- (id)nodeData;
- (void)setDistance:(double)arg1;
- (void)setNodeData:(id)arg1;

@end
