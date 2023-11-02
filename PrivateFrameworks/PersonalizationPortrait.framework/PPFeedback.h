
@interface PPFeedback : PPBaseFeedback

- (id)initWithExplicitlyEngagedString:(id)arg1;
- (id)initWithExplicitlyEngagedStrings:(id)arg1 explicitlyRejectedStrings:(id)arg2 implicitlyEngagedStrings:(id)arg3 implicitlyRejectedStrings:(id)arg4;
- (id)initWithExplicitlyEngagedStrings:(id)arg1 explicitlyRejectedStrings:(id)arg2 implicitlyEngagedStrings:(id)arg3 implicitlyRejectedStrings:(id)arg4 offeredStrings:(id)arg5;
- (id)initWithExplicitlyEngagedStrings:(id)arg1 implicitlyEngagedStrings:(id)arg2 offeredStrings:(id)arg3;
- (id)initWithExplicitlyRejectedString:(id)arg1;
- (id)initWithImplicitlyEngagedString:(id)arg1;
- (id)initWithImplicitlyRejectedString:(id)arg1;
- (id)initWithOfferedString:(id)arg1;

@end
