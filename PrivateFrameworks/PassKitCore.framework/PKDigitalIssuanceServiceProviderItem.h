
@interface PKDigitalIssuanceServiceProviderItem : NSObject <PKIdentifiable> {
    NSDecimalNumber * _amount;
    NSString * _identifier;
    NSString * _localizedDescription;
    NSString * _localizedDisplayName;
    unsigned long long  _unitCount;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unitCount;

- (void).cxx_destruct;
- (id)amount;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServiceProviderProduct:(id)arg1;
- (id)localizedDescription;
- (id)localizedDisplayName;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)unitCount;

@end
