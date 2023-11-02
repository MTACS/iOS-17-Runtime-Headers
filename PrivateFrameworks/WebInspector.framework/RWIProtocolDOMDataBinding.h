
@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *binding;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)binding;
- (id)initWithBinding:(id)arg1 value:(id)arg2;
- (void)setBinding:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (id)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithBinding:(id)arg1 value:(id)arg2;

@end
