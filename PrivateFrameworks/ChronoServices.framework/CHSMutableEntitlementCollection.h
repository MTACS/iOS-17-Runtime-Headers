
@interface CHSMutableEntitlementCollection : CHSEntitlementCollection

@property (nonatomic) bool canKeepAlive;
@property (nonatomic) bool canOpenSystemURLs;
@property (nonatomic) bool usesEventService;

- (void)setCanKeepAlive:(bool)arg1;
- (void)setCanOpenSystemURLs:(bool)arg1;
- (void)setUsesEventService:(bool)arg1;

@end
