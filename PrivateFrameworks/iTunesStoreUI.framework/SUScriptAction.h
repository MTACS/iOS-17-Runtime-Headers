
@interface SUScriptAction : SUScriptObject <NSCopying> {
    NSString * _actionType;
}

@property (copy) NSString *actionType;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)actionType;
- (id)attributeKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithActionType:(id)arg1;
- (void)performAction;
- (id)scriptAttributeKeys;
- (void)setActionType:(id)arg1;

@end
