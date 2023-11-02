
@protocol PREResponsesMetricsProtocol <NSObject>

@required

- (void)registerResponseTapped:(PREResponseTappedEvent *)arg1;
- (void)registerResponseViewed:(NSNumber *)arg1;
- (void)registerResponsesGenerated:(PREResponsesGeneratedEvent *)arg1;

@end
