
@interface BWSWFRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    int  _lossyCompressionLevel;
    int  _version;
    int  version;
}

@property (nonatomic) int lossyCompressionLevel;
@property (nonatomic) int version;

- (void)dealloc;
- (int)lossyCompressionLevel;
- (void)setLossyCompressionLevel:(int)arg1;
- (void)setVersion:(int)arg1;
- (int)version;

@end
