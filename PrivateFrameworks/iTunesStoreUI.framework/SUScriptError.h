
@interface SUScriptError : SUScriptObject {
    NSError * _error;
}

@property (readonly) long long code;
@property (readonly) NSString *domain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *localizedFailureReason;
@property (readonly) NSString *localizedRecoverySuggestion;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (long long)code;
- (void)dealloc;
- (id)domain;
- (id)initWithError:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoverySuggestion;
- (id)scriptAttributeKeys;

@end
