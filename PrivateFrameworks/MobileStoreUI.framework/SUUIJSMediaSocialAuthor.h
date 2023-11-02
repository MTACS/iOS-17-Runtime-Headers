
@interface SUUIJSMediaSocialAuthor : NSObject <SUUIJSMediaSocialAuthor> {
    SUUIMediaSocialAuthor * _mediaSocialAuthor;
}

@property (nonatomic, readonly) NSString *dsId;
@property (nonatomic, readonly) NSString *entityIdentifier;
@property (nonatomic, readonly) NSString *entityType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *permissions;
@property (nonatomic, readonly) NSDictionary *storePlatformData;

- (void).cxx_destruct;
- (id)dsId;
- (id)entityIdentifier;
- (id)entityType;
- (id)initWithSUUIMediaSocialAuthor:(id)arg1;
- (id)name;
- (id)permissions;
- (id)storePlatformData;

@end
