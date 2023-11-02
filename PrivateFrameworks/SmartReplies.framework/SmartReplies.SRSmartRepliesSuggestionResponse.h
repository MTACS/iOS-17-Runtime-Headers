
@interface SmartReplies.SRSmartRepliesSuggestionResponse : NSObject <NSCopying, NSSecureCoding> {
    void suggestions;
}

@property (nonatomic, readonly) NSArray *suggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)suggestions;

@end
