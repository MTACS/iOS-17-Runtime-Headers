
@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolCSSStyle *inlineStyle;
@property (nonatomic, copy) NSArray *matchedCSSRules;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithMatchedCSSRules:(id)arg1;
- (id)inlineStyle;
- (id)matchedCSSRules;
- (void)setInlineStyle:(id)arg1;
- (void)setMatchedCSSRules:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithMatchedCSSRules:(id)arg1;

@end
