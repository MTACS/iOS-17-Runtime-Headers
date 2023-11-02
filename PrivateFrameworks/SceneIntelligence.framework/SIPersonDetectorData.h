
@interface SIPersonDetectorData : SIOutputData <SIData> {
    NSMutableArray * _boundingBoxes;
}

@property (nonatomic, retain) NSMutableArray *boundingBoxes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)boundingBoxes;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)setBoundingBoxes:(id)arg1;

@end
