
@interface SAMLScoping : SAMLBaseElement

@property (nonatomic, readonly) NSString *getComplete;
@property (nonatomic, readonly) NSArray *idpList;
@property (nonatomic, readonly) NSNumber *proxyCount;
@property (nonatomic, readonly) NSArray *requesterIds;

+ (id)createElement:(id*)arg1;

- (void)addRequesterId:(id)arg1;
- (id)getComplete;
- (id)idpList;
- (id)proxyCount;
- (id)requesterIds;

@end
