
@interface WFShowDialogEvent : WFEvent {
    NSString * _automationType;
    NSString * _dialogType;
    NSString * _dismissalType;
    NSString * _key;
    NSString * _presentationStyle;
}

@property (nonatomic, copy) NSString *automationType;
@property (nonatomic, copy) NSString *dialogType;
@property (nonatomic, copy) NSString *dismissalType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *presentationStyle;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)automationType;
- (id)dialogType;
- (id)dismissalType;
- (id)key;
- (id)presentationStyle;
- (void)setAutomationType:(id)arg1;
- (void)setDialogType:(id)arg1;
- (void)setDismissalType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPresentationStyle:(id)arg1;

@end
