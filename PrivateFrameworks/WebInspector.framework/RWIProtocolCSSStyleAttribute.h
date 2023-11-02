
@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RWIProtocolCSSStyle *style;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithName:(id)arg1 style:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithName:(id)arg1 style:(id)arg2;

@end
