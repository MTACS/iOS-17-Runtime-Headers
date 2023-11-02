
@interface SAMicroblogObject : SADomainObject

@property (nonatomic, copy) NSURL *attachment;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDate *dateSent;
@property (nonatomic, copy) NSDictionary *hashtagAlternatives;
@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSNumber *outgoing;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSURL *refereceId;
@property (nonatomic, retain) SAPersonAttribute *sender;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSDictionary *socialProfileReferences;
@property (nonatomic, copy) NSNumber *useLocation;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachment;
- (id)content;
- (id)dateSent;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashtagAlternatives;
- (id)location;
- (id)outgoing;
- (id)recipients;
- (id)refereceId;
- (id)sender;
- (id)serviceType;
- (void)setAttachment:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setHashtagAlternatives:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRefereceId:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSocialProfileReferences:(id)arg1;
- (void)setUseLocation:(id)arg1;
- (id)socialProfileReferences;
- (id)useLocation;

@end
