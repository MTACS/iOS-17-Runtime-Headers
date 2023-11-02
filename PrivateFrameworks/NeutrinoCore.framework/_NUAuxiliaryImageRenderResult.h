
@interface _NUAuxiliaryImageRenderResult : _NURenderResult <NUAuxiliaryImageRenderResult> {
    <NUAuxiliaryImage> * _auxiliaryImage;
}

@property (retain) <NUAuxiliaryImage> *auxiliaryImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryImage;
- (void)setAuxiliaryImage:(id)arg1;

@end
