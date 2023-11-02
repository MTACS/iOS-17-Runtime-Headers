
@interface SAMLAuthZDecisionQuery : XMLWrapperDoc {
    SAMLAuthZDecisionQueryElement * _requestElement;
}

@property (nonatomic, readonly) NSString *channelId;
@property (nonatomic, retain) SAMLAuthZDecisionQueryElement *requestElement;

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (id)channelId;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)requestElement;
- (void)setRequestElement:(id)arg1;
- (void)setResource:(id)arg1;
- (void)setSubjectFromResponse:(id)arg1;

@end
