
@interface PICompositionExporterOptions : NSObject {
    NUColorSpace * _colorSpace;
    NSString * _pairingIdentifier;
    NUPriority * _priority;
    <NUScalePolicy> * _scalePolicy;
}

@property (retain) NUColorSpace *colorSpace;
@property (copy) NSString *pairingIdentifier;
@property (retain) NUPriority *priority;
@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)description;
- (id)init;
- (id)pairingIdentifier;
- (id)priority;
- (id)scalePolicy;
- (void)setColorSpace:(id)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setScalePolicy:(id)arg1;

@end
