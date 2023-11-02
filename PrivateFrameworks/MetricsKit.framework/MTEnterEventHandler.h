
@interface MTEnterEventHandler : MTStandardEventHandler

@property (nonatomic) <MTEnterEventHandlerDelegate> *delegate;

- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)osLanguages:(id)arg1;

@end
