
@interface RWIProtocolCSSProperty : RWIProtocolJSONObject <APKRemoteInspectorStylePropertyProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool implicit;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) bool parsedOk;
@property (nonatomic, copy) NSString *priority;
@property (nonatomic, retain) RWIProtocolCSSSourceRange *range;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly, copy) NSString *value;
@property (nonatomic, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (bool)implicit;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)name;
- (bool)parsedOk;
- (id)priority;
- (id)range;
- (void)setImplicit:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParsedOk:(bool)arg1;
- (void)setPriority:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setValue:(id)arg1;
- (long long)status;
- (id)text;
- (id)value;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithName:(id)arg1 value:(id)arg2;

@end
