
@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace> {
    double  _confidence;
    NSString * _placeInterestType;
}

@property (nonatomic, readonly) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *placeInterestType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)confidence;
- (id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2;
- (id)placeInterestType;

@end
