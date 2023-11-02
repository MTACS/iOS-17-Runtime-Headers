
@interface PKDigitalIssuanceServiceProviderProduct : NSObject <PKIdentifiable> {
    NSString * _identifier;
    NSArray * _items;
    NSString * _localizedDescription;
    NSString * _localizedDisplayName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)items;
- (id)localizedDescription;
- (id)localizedDisplayName;
- (void)setIdentifier:(id)arg1;

@end
