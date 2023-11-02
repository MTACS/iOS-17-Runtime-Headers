
@interface DDHostTextQueryContext : NSObject <RVTextQueryProtocol> {
    NSString * _identifier;
    long long  _queryID;
    NSString * _queryString;
    NSString * _title;
    NSString * _userAgent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long queryID;
@property (nonatomic, retain) NSString *queryString;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *userAgent;

- (void).cxx_destruct;
- (id)identifier;
- (long long)queryID;
- (id)queryString;
- (void)setIdentifier:(id)arg1;
- (void)setQueryID:(long long)arg1;
- (void)setQueryString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)title;
- (id)userAgent;

@end
