
@interface SAMLAttributeQuery : XMLWrapperDoc {
    SAMLAttributeQueryElement * _requestElement;
    NSData * _schemaData;
}

@property (nonatomic, readonly) NSString *channelId;
@property (nonatomic, retain) SAMLAttributeQueryElement *requestElement;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (void)addAttribute:(id)arg1 values:(id)arg2;
- (id)channelId;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)requestElement;
- (void)setRequestElement:(id)arg1;
- (void)setSubjectFromResponse:(id)arg1;

@end
