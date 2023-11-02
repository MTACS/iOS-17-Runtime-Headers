
@interface NMAPIStarterPackMultiplexRequest : NMAPIRequest {
    bool  _underageUser;
}

@property (getter=isUnderageUser, nonatomic) bool underageUser;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUnderageUser:(bool)arg1;
- (bool)isUnderageUser;
- (Class)responseParserClass;
- (void)setUnderageUser:(bool)arg1;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
