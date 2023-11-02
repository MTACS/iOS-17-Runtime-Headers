
@interface MTAccountEventHandler : MTStandardEventHandler

@property (nonatomic) <MTAccountEventHandlerDelegate> *delegate;

- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)type:(id)arg1;

@end
