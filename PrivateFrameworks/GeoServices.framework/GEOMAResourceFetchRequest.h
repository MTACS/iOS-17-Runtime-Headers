
@interface GEOMAResourceFetchRequest : GEOXPCRequest <GEOXPCRequest> {
    NSDictionary * _extras;
    unsigned long long  _options;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *extras;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)extras;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)options;
- (unsigned long long)reply;
- (void)setExtras:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
