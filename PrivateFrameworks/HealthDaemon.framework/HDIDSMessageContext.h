
@interface HDIDSMessageContext : NSObject {
    IDSMessageContext * _context;
}

@property (nonatomic, readonly, copy) NSString *originalGUID;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithMessageContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalGUID;

@end
