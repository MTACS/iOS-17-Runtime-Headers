
@interface MLCANEDeviceOps : MLCDeviceOps {
    NSMutableArray * _constantTensors;
    int  _deviceOpType;
    _MLCANEModel * _model;
    id  _params;
    _MLCANEPlistBuilder * _plistBuilder;
    unsigned long long  _procedureIndex;
    NSString * _procedureName;
    _ANERequest * _request;
    NSArray * _units;
}

@property (nonatomic, readonly) NSMutableArray *constantTensors;
@property (nonatomic, readonly) int deviceOpType;
@property (nonatomic, retain) _MLCANEModel *model;
@property (nonatomic, readonly, retain) id params;
@property (nonatomic, retain) _MLCANEPlistBuilder *plistBuilder;
@property (nonatomic) unsigned long long procedureIndex;
@property (nonatomic, retain) NSString *procedureName;
@property (nonatomic, retain) _ANERequest *request;
@property (nonatomic, retain) NSArray *units;

+ (id)deviceOpsWithType:(int)arg1 params:(id)arg2;

- (void).cxx_destruct;
- (id)constantTensors;
- (int)deviceOpType;
- (id)initWithType:(int)arg1 params:(id)arg2;
- (id)model;
- (id)params;
- (id)plistBuilder;
- (unsigned long long)procedureIndex;
- (id)procedureName;
- (id)request;
- (void)setModel:(id)arg1;
- (void)setPlistBuilder:(id)arg1;
- (void)setProcedureIndex:(unsigned long long)arg1;
- (void)setProcedureName:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setUnits:(id)arg1;
- (id)units;

@end
