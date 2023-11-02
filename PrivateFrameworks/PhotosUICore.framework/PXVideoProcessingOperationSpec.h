
@interface PXVideoProcessingOperationSpec : NSObject <NSCopying> {
    NSURL * _debugInfoOutputURL;
    NSURL * _inputVideoURL;
    NSURL * _outputURL;
}

@property (nonatomic, retain) NSURL *debugInfoOutputURL;
@property (nonatomic, retain) NSURL *inputVideoURL;
@property (nonatomic, retain) NSURL *outputURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugInfoOutputURL;
- (id)inputVideoURL;
- (id)outputURL;
- (void)setDebugInfoOutputURL:(id)arg1;
- (void)setInputVideoURL:(id)arg1;
- (void)setOutputURL:(id)arg1;

@end
