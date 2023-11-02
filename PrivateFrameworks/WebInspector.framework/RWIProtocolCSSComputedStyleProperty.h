
@interface RWIProtocolCSSComputedStyleProperty : RWIProtocolJSONObject <APKRemoteInspectorStylePropertyProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *value;
@property (nonatomic, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithName:(id)arg1 value:(id)arg2;

@end
