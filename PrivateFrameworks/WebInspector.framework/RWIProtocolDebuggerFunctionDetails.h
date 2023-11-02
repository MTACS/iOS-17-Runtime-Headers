
@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) RWIProtocolDebuggerLocation *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *scopeChain;

- (id)displayName;
- (id)initWithLocation:(id)arg1;
- (id)location;
- (id)name;
- (id)scopeChain;
- (void)setDisplayName:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScopeChain:(id)arg1;

@end
