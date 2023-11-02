
@interface GEOMapSubscriptionsFetchRequest : GEOXPCRequest <GEOXPCRequest> {
    bool  _fetchExpired;
    NSArray * _identifiersFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchExpired;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiersFilter;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (bool)fetchExpired;
- (id)identifiersFilter;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (void)setFetchExpired:(bool)arg1;
- (void)setIdentifiersFilter:(id)arg1;

@end
