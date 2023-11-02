
@interface TCMPSStyleTransferWeights : NSObject {
    NSData * _data;
    NSArray * _shape;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSArray *shape;

- (void).cxx_destruct;
- (id)data;
- (void)setData:(id)arg1;
- (void)setShape:(id)arg1;
- (id)shape;

@end
