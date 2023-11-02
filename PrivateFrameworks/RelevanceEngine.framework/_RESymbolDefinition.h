
@interface _RESymbolDefinition : NSObject {
    id  _objectValue;
    NSDictionary * _options;
    REScriptToken * _token;
    unsigned long long  _type;
    REScriptASTNode * _value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) id objectValue;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) REScriptToken *token;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) REScriptASTNode *value;

- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3;
- (id)name;
- (id)objectValue;
- (id)options;
- (void)setObjectValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)token;
- (unsigned long long)type;
- (id)value;

@end
