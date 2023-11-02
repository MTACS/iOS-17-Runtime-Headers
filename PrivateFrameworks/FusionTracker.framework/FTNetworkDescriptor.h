
@interface FTNetworkDescriptor : NSObject {
    NSArray * _inputImages;
    NSArray * _inputReferences;
    NSString * _name;
    NSArray * _outputNames;
}

@property (nonatomic, retain) NSArray *inputImages;
@property (nonatomic, retain) NSArray *inputReferences;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *outputNames;

- (void).cxx_destruct;
- (id)init;
- (id)inputImages;
- (id)inputReferences;
- (id)name;
- (id)onlyImageInput;
- (id)outputNames;
- (void)setInputImages:(id)arg1;
- (void)setInputReferences:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutputNames:(id)arg1;

@end
