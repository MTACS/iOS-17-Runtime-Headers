
@interface COSE_Mac0 : COSE {
    NSData * _mac;
}

@property (nonatomic, readonly) NSData *mac;

- (void).cxx_destruct;
- (id)description;
- (id)generateMessageForMACWithApplicationProtectedAttributes:(id)arg1;
- (id)initWithCBOR:(id)arg1;
- (id)initWithProtectedHeaders:(id)arg1 unprotectedHeaders:(id)arg2 payload:(id)arg3 tag:(id)arg4;
- (id)mac;

@end
