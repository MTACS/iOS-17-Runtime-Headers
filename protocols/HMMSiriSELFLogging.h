
@protocol HMMSiriSELFLogging

@required

- (bool)enabledForSiriSELFLogging;
- (SISchemaTopLevelUnionType *)siriInstrumentationMessage;

@end
