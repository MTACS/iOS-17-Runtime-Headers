
@interface PGMenuItem : NSObject <BSDescriptionProviding> {
    id /* block */  _action;
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionaryRepresentation;
- (long long)identifier;
- (id)initWithDictionary:(id)arg1 action:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2 action:(id /* block */)arg3;
- (void)invokeAction;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)symbolName;
- (id)title;

@end
