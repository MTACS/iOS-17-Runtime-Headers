
@interface VSScriptMessage : NSObject {
    NSString * _body;
    VSScriptSecurityOrigin * _source;
    VSScriptSecurityOrigin * _target;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, retain) VSScriptSecurityOrigin *source;
@property (nonatomic, retain) VSScriptSecurityOrigin *target;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)setBody:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)target;

@end
