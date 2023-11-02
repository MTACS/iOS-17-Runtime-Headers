
@interface MSSendMailIntent : INIntent <EFPubliclyDescribable>

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *cc;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isDraft;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *to;
@property (nonatomic, copy) NSString *userTypedContent;

- (id)_privacySafeDescription;
- (id)description;
- (id)ef_publicDescription;

@end
