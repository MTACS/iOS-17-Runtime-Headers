
@interface ATXSleepSuggestion : NSObject <NSSecureCoding> {
    ATXSleepSuggestionOccurrence * _occurrence;
}

@property (nonatomic, retain) ATXSleepSuggestionOccurrence *occurrence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOccurence:(id)arg1;
- (id)occurrence;
- (void)setOccurrence:(id)arg1;

@end
