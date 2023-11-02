
@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic) bool dynamic;
@property (nonatomic, copy) NSArray *specificity;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (bool)dynamic;
- (id)initWithText:(id)arg1;
- (void)setDynamic:(bool)arg1;
- (void)setSpecificity:(id)arg1;
- (void)setText:(id)arg1;
- (id)specificity;
- (id)text;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithText:(id)arg1;

@end
