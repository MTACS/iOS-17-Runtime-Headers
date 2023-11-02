
@interface SBDodgingModifierEventResponse : SBChainableModifierEventResponse {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (id)newEventResponse;

- (id)description;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
