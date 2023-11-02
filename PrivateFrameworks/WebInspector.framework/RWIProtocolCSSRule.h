
@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *groupings;
@property (nonatomic) bool isImplicitlyNested;
@property (nonatomic) long long origin;
@property (nonatomic, retain) RWIProtocolCSSRuleId *ruleId;
@property (nonatomic, retain) RWIProtocolCSSSelectorList *selectorList;
@property (nonatomic) int sourceLine;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic, retain) RWIProtocolCSSStyle *style;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)groupings;
- (id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;
- (bool)isImplicitlyNested;
- (long long)origin;
- (id)ruleId;
- (id)selectorList;
- (void)setGroupings:(id)arg1;
- (void)setIsImplicitlyNested:(bool)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRuleId:(id)arg1;
- (void)setSelectorList:(id)arg1;
- (void)setSourceLine:(int)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStyle:(id)arg1;
- (int)sourceLine;
- (id)sourceURL;
- (id)style;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_cssRuleForRule:(id)arg1 withOrdinal:(int)arg2 forStyleSheetHeader:(id)arg3 forStyleMarkup:(id)arg4 withNewLineIndexSet:(id)arg5;
+ (id)safe_initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;

- (id)ik_ruleMatchForClassSelectors:(id)arg1 andIdSelector:(id)arg2;

@end
