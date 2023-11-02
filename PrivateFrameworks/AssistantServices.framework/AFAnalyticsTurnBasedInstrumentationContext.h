
@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding> {
    SISchemaClientTurnContext * _turnContext;
    NSUUID * _turnIdentifier;
}

@property (nonatomic, readonly) NSUUID *turnIdentifier;

+ (id)newTurnBasedContextWithPreviousTurnID:(id)arg1;
+ (id)newTurnBasedContextWithPreviousTurnID:(id)arg1 analytics:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)emitInstrumentation:(id)arg1;
- (void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTurnIdentifier:(id)arg1;
- (id)nextTurnBasedContext;
- (id)nextTurnBasedContextForAnalytics:(id)arg1;
- (id)turnIdentifier;

@end
