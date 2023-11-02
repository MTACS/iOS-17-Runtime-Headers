
@interface MTLGPUDebugGPULog : NSObject <MTLFunctionLog> {
    unsigned long long  _callIndex;
    <MTLFunctionLogDebugLocation> * _debugLocation;
    NSString * _encoderLabel;
    NSArray * _errorStackTrace;
    <MTLFunction> * _function;
    MTLGPUDebugImageData * _image;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long callIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MTLFunctionLogDebugLocation> *debugLocation;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *encoderLabel;
@property (nonatomic, retain) NSArray *errorStackTrace;
@property (nonatomic, retain) <MTLFunction> *function;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTLGPUDebugImageData *image;
@property (nonatomic, readonly) NSString *locationDescription;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

- (unsigned long long)callIndex;
- (void)dealloc;
- (id)debugLocation;
- (id)encoderLabel;
- (id)errorStackTrace;
- (id)function;
- (id)image;
- (id)locationDescription;
- (void)setCallIndex:(unsigned long long)arg1;
- (void)setDebugLocation:(id)arg1;
- (void)setEncoderLabel:(id)arg1;
- (void)setErrorStackTrace:(id)arg1;
- (void)setFunction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
