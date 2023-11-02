
@interface POWSTrustProcess : NSObject {
    bool  _parseWSTrust13;
    bool  _parseWSTrust2005;
}

@property (nonatomic) bool parseWSTrust13;
@property (nonatomic) bool parseWSTrust2005;

- (id)createWSTrust13Request:(id)arg1;
- (id)createWSTrust13Response:(id)arg1;
- (id)createWSTrust2005Request:(id)arg1;
- (id)createWSTrust2005Response:(id)arg1;
- (id)createWSTrustFault:(id)arg1;
- (id)init;
- (id)parseMexResponse:(id)arg1 namespaces:(id)arg2 policyXPath:(id)arg3 action:(id)arg4;
- (bool)parseWSTrust13;
- (bool)parseWSTrust2005;
- (id)parseWSTrustMexResponse:(id)arg1 version:(unsigned long long)arg2;
- (id)parseWSTrustRequest:(id)arg1 version:(unsigned long long)arg2;
- (id)parseWSTrustResponse:(id)arg1 version:(unsigned long long)arg2;
- (void)setParseWSTrust13:(bool)arg1;
- (void)setParseWSTrust2005:(bool)arg1;

@end
