
@interface GEOETAReplyUpdateable : GEOXPCReply <GEOXPCReply> {
    GEOETATrafficUpdateErrorInfo * _errorInfo;
    GEOETATrafficUpdateResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOETATrafficUpdateErrorInfo *errorInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOETATrafficUpdateResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)errorInfo;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)response;
- (void)setErrorInfo:(id)arg1;
- (void)setResponse:(id)arg1;

@end
