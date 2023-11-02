
@interface SGMultiHeadEspressoModelWrapper : NSObject {
    NSString * _espressoModelFile;
    NSDictionary * _headDimensionality;
    NSString * _inputName;
    _PASLazyPurgeableResult * _model;
}

@property (nonatomic, retain) NSString *espressoModelFile;
@property (nonatomic, retain) NSDictionary *headDimensionality;
@property (nonatomic, retain) NSString *inputName;
@property (nonatomic, retain) _PASLazyPurgeableResult *model;

- (void).cxx_destruct;
- (id)espressoModelFile;
- (id)headDimensionality;
- (id)inputName;
- (id)model;
- (void)setEspressoModelFile:(id)arg1;
- (void)setHeadDimensionality:(id)arg1;
- (void)setInputName:(id)arg1;
- (void)setModel:(id)arg1;

@end
