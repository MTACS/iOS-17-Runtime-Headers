
@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolCSSSourceRange *range;
@property (nonatomic, retain) RWIProtocolCSSRuleId *ruleId;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long type;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithType:(long long)arg1;
- (id)range;
- (id)ruleId;
- (void)setRange:(id)arg1;
- (void)setRuleId:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sourceURL;
- (id)text;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithType:(long long)arg1;

@end
