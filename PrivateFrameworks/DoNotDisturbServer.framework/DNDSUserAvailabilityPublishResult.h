
@interface DNDSUserAvailabilityPublishResult : NSObject {
    AKAvailability * _availability;
    NSString * _identifier;
}

@property (readonly, copy) AKAvailability *availability;
@property (readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)availability;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 availability:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
