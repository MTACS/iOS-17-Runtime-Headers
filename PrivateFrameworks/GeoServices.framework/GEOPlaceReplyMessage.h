
@interface GEOPlaceReplyMessage : GEOXPCReply <GEOXPCReply> {
    NSUUID * _requestUUID;
    GEOPDPlaceResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (nonatomic, retain) GEOPDPlaceResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)requestUUID;
- (id)response;
- (void)setRequestUUID:(id)arg1;
- (void)setResponse:(id)arg1;

@end
