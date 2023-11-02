
@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolCSSSourceRange *range;
@property (nonatomic, copy) NSArray *selectors;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithSelectors:(id)arg1 text:(id)arg2;
- (id)range;
- (id)selectors;
- (void)setRange:(id)arg1;
- (void)setSelectors:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_cssSelectorListFromSelectorList:(id)arg1 forStyleMarkup:(id)arg2 withNewLineIndexSet:(id)arg3;
+ (id)safe_initWithSelectors:(id)arg1 text:(id)arg2;

@end
