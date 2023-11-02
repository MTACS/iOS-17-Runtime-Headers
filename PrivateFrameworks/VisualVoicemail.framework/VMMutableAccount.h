
@interface VMMutableAccount : VMAccount

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, copy) NSString *abbreviatedAccountDescription;
@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, retain) VMHandle *handle;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (getter=isProvisioned, nonatomic) bool provisioned;
@property (nonatomic, copy) NSString *serviceName;

@end
