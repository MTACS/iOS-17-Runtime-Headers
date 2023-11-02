
@interface SXPhoneNumberAction : NSObject <SXAction> {
    NSString * _phoneNumber;
    SXJSONDictionary * analytics;
}

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)analytics;
- (id)initWithPhoneNumber:(id)arg1;
- (id)phoneNumber;
- (id)type;

@end
