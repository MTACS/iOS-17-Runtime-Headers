
@interface SBRemovalDodgingModifierEvent : SBDodgingModifierEvent {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (unsigned long long)type;

@end
