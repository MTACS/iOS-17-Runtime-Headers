
@interface APECDiagnosticPurposeConfig : APConfiguration <APECPurposeConfigProtocol> {
    NSNumber * _purpose;
}

@property (nonatomic, retain) NSArray *allowedPurposes;
@property (nonatomic, retain) NSArray *allowedSources;
@property (nonatomic, retain) NSNumber *collectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destination;
@property (nonatomic, retain) NSArray *disallowedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (nonatomic, retain) NSNumber *purpose;
@property (nonatomic, retain) NSNumber *samplePercentage;
@property (nonatomic, retain) NSNumber *samplePeriod;
@property (readonly) Class superclass;

+ (id)path;

- (void).cxx_destruct;
- (id)purpose;
- (void)setPurpose:(id)arg1;

@end
