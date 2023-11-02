
@interface PMLEspressoDataProvider : NSObject <ETDataProvider> {
    NSMutableData * _inputBuffer;
    unsigned long long  _inputDim;
    NSString * _inputName;
    NSData * _labelsData;
    unsigned long long  _numberOfDataPoints;
    NSArray * _rowsData;
    NSMutableData * _trueLabelBuffer;
    NSString * _trueLabelName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearBuffers;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithRowsData:(id)arg1 labelsData:(id)arg2 inputName:(id)arg3 inputDim:(unsigned long long)arg4 trueLabelName:(id)arg5;
- (unsigned long long)numberOfDataPoints;

@end
