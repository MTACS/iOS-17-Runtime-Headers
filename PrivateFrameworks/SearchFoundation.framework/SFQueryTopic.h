
@interface SFQueryTopic : SFTopic <SFQueryTopic> {
    NSString * _query;
    int  _queryType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) int queryType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 query:(id)arg2;
- (id)initWithType:(int)arg1 query:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)query;
- (int)queryType;
- (void)setQuery:(id)arg1;
- (void)setQueryType:(int)arg1;

@end
