
@interface GEOMAResourceFetchReply : GEOXPCReply <GEOXPCReply> {
    NSData * _sandBoxToken;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *sandBoxToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)sandBoxToken;
- (void)setSandBoxToken:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
