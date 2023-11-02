
@interface GEOPlaceByPhoneNumberRequest : GEOXPCRequest <GEOXPCRequest> {
    bool  _allowCellular;
    NSArray * _phoneNumbers;
    NSUUID * _requestUUID;
}

@property (nonatomic) bool allowCellular;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *phoneNumbers;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (bool)allowCellular;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)phoneNumbers;
- (unsigned long long)reply;
- (id)requestUUID;
- (void)setAllowCellular:(bool)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setRequestUUID:(id)arg1;

@end
