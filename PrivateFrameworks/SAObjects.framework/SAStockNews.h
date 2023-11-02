
@interface SAStockNews : SADomainObject

@property (nonatomic, copy) NSDate *timeStamp;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

+ (id)news;
+ (id)newsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTimeStamp:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)timeStamp;
- (id)title;
- (id)url;

@end
