
@interface WFSuspendShortcutEvent : WFEvent {
    NSString * _dismissalType;
    NSString * _key;
    NSString * _presentationStyle;
}

@property (nonatomic, copy) NSString *dismissalType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *presentationStyle;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)dismissalType;
- (id)key;
- (id)presentationStyle;
- (void)setDismissalType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPresentationStyle:(id)arg1;

@end
