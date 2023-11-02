
@interface SmartReplies.SRSmartRepliesSuggestion : NSObject <NSCopying, NSSecureCoding> {
    void isDynamicSuggestion;
    void title;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) bool isDynamicSuggestion;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 isDynamicSuggestion:(bool)arg2;
- (bool)isDynamicSuggestion;
- (bool)isEqual:(id)arg1;
- (id)title;

@end
