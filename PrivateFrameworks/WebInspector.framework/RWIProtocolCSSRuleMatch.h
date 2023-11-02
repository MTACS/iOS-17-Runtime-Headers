
@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *matchingSelectors;
@property (nonatomic, retain) RWIProtocolCSSRule *rule;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithRule:(id)arg1 matchingSelectors:(id)arg2;
- (id)matchingSelectors;
- (id)rule;
- (void)setMatchingSelectors:(id)arg1;
- (void)setRule:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithRule:(id)arg1 matchingSelectors:(id)arg2;

@end
