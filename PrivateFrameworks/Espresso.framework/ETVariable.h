
@interface ETVariable : NSObject {
    float  _initializationAlpha;
    float  _initializationBeta;
    unsigned long long  _initializationMode;
    unsigned long long  _kind;
    NSString * _layerName;
    ETModelDef * _model;
    NSString * _name;
}

@property float initializationAlpha;
@property float initializationBeta;
@property unsigned long long initializationMode;
@property (nonatomic) unsigned long long kind;
@property (nonatomic, retain) NSString *layerName;
@property (nonatomic) ETModelDef *model;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)copyData;
- (id)getOpaqueCopy;
- (id)initWithModelDef:(id)arg1;
- (float)initializationAlpha;
- (float)initializationBeta;
- (unsigned long long)initializationMode;
- (unsigned long long)kind;
- (id)layerName;
- (id)model;
- (id)name;
- (void)setInitializationAlpha:(float)arg1;
- (void)setInitializationBeta:(float)arg1;
- (void)setInitializationMode:(unsigned long long)arg1;
- (void)setKind:(unsigned long long)arg1;
- (void)setLayerName:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (id)swapWithOpaqueCopy:(id)arg1;
- (void)updateWithData:(id)arg1;

@end
