
@interface MKDataClassMetrics : NSObject {
    double  _exportTime;
    int  _itemCount;
    NSString * _name;
    double  _networkQueueTime;
    double  _preparationTime;
    unsigned long long  _size;
    double  _transferSpeed;
    double  _transferTime;
}

@property (nonatomic) double exportTime;
@property (nonatomic) int itemCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double networkQueueTime;
@property (nonatomic) double preparationTime;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double transferSpeed;
@property (nonatomic) double transferTime;

- (void).cxx_destruct;
- (double)exportTime;
- (id)initWithDictionary:(id)arg1;
- (int)itemCount;
- (id)name;
- (double)networkQueueTime;
- (double)preparationTime;
- (void)setExportTime:(double)arg1;
- (void)setItemCount:(int)arg1;
- (void)setName:(id)arg1;
- (void)setNetworkQueueTime:(double)arg1;
- (void)setPreparationTime:(double)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setTransferSpeed:(double)arg1;
- (void)setTransferTime:(double)arg1;
- (unsigned long long)size;
- (double)transferSpeed;
- (double)transferTime;

@end
