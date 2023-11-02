
@interface GEOETAUpdateableWillSendReply : GEOXPCReply <GEOXPCReply> {
    GEOETATrafficUpdateRequest * _updatedRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOETATrafficUpdateRequest *updatedRequest;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setUpdatedRequest:(id)arg1;
- (id)updatedRequest;

@end
