
@interface SAMLAttribute : SAMLBaseElement

@property (nonatomic, readonly) NSString *friendlyName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSString *nameFormat;
@property (nonatomic, readonly) NSArray *values;

+ (id)createElement:(id*)arg1;

- (void)addAttributeValue:(id)arg1;
- (id)friendlyName;
- (id)name;
- (id)nameFormat;
- (void)setName:(id)arg1;
- (id)values;

@end
