
@interface CNEncodedFetchResponse : NSObject <CNEncodedFetchResponse, NSSecureCoding> {
    NSData * _data;
    NSSet * _identifierAccountingData;
    NSDictionary * _matchInfo;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *identifierAccountingData;
@property (nonatomic, retain) NSDictionary *matchInfo;
@property (readonly) Class superclass;

+ (id)emptyResponse;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierAccountingData;
- (id)initWithCoder:(id)arg1;
- (id)matchInfo;
- (void)setData:(id)arg1;
- (void)setIdentifierAccountingData:(id)arg1;
- (void)setMatchInfo:(id)arg1;

@end
