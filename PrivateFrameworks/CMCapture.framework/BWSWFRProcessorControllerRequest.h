
@interface BWSWFRProcessorControllerRequest : BWStillImageProcessorControllerRequest {
    int  _demosaicedRawErr;
}

@property (nonatomic) int demosaicedRawErr;

- (int)demosaicedRawErr;
- (bool)readyForProcessing;
- (void)setDemosaicedRawErr:(int)arg1;

@end
