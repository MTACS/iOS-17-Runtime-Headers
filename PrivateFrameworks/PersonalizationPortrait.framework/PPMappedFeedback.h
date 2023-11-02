
@interface PPMappedFeedback : PPBaseFeedback

- (id)initWithExplicitlyEngagedString:(id)arg1 mappingId:(id)arg2;
- (id)initWithExplicitlyEngagedStrings:(id)arg1 explicitlyRejectedStrings:(id)arg2 implicitlyEngagedStrings:(id)arg3 implicitlyRejectedStrings:(id)arg4 mappingId:(id)arg5;
- (id)initWithExplicitlyEngagedStrings:(id)arg1 explicitlyRejectedStrings:(id)arg2 implicitlyEngagedStrings:(id)arg3 implicitlyRejectedStrings:(id)arg4 offeredStrings:(id)arg5 mappingId:(id)arg6;
- (id)initWithExplicitlyEngagedStrings:(id)arg1 implicitlyEngagedStrings:(id)arg2 offeredStrings:(id)arg3 mappingId:(id)arg4;
- (id)initWithExplicitlyRejectedString:(id)arg1 mappingId:(id)arg2;
- (id)initWithImplicitlyEngagedString:(id)arg1 mappingId:(id)arg2;
- (id)initWithImplicitlyRejectedString:(id)arg1 mappingId:(id)arg2;
- (id)initWithOfferedString:(id)arg1 mappingId:(id)arg2;

@end
