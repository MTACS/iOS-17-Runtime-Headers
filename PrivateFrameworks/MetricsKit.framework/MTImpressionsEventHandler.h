
@interface MTImpressionsEventHandler : MTImpressionableEventHandler

@property (nonatomic) <MTImpressionsEventHandlerDelegate> *delegate;

- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)xpViewableThreshold:(id)arg1;

@end
