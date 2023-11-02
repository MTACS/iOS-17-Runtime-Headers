
@interface ATXProactiveSuggestionShadowLoggingContextEventTuple : NSObject <NSSecureCoding> {
    BMStoreEvent * _event;
    ATXProactiveSuggestionShadowLoggingContext * _shadowLoggingContext;
}

@property (nonatomic, readonly) BMStoreEvent *event;
@property (nonatomic, readonly) ATXProactiveSuggestionShadowLoggingContext *shadowLoggingContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 shadowLoggingContext:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionShadowLoggingContextEventTuple:(id)arg1;
- (id)shadowLoggingContext;

@end
