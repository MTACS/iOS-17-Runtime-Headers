
@interface SFLocalTopic : SFTopic <SFLocalTopic> {
    SFSearchResult * _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) SFSearchResult *result;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 identifier:(id)arg2;
- (id)normalizedTopic;
- (id)result;
- (void)setResult:(id)arg1;

@end
