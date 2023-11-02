
@interface SBInvalidationDodgingModifierEventResponse : SBDodgingModifierEventResponse {
    NSString * _completionIdentifier;
    bool  _disableCoalescing;
    NSString * _identifier;
    unsigned long long  _options;
}

@property (nonatomic, retain) NSString *completionIdentifier;
@property (nonatomic) bool disableCoalescing;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;

+ (id)responseWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)completionIdentifier;
- (id)description;
- (bool)disableCoalescing;
- (id)identifier;
- (id)initWithOptions:(unsigned long long)arg1;
- (unsigned long long)options;
- (void)setCompletionIdentifier:(id)arg1;
- (void)setDisableCoalescing:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)type;

@end
