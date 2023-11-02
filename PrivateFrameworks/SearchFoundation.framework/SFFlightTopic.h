
@interface SFFlightTopic : SFQueryTopic <SFFlightTopic> {
    NSDate * _date;
}

@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly) int queryType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 date:(id)arg2;
- (id)initWithQuery:(id)arg1 date:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setDate:(id)arg1;

@end
