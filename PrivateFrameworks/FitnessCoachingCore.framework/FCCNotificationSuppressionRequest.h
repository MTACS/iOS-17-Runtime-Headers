
@interface FCCNotificationSuppressionRequest : NSObject <FCCDataSerializable> {
    NSDate * _expirationDate;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)expirationDate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 expirationDate:(id)arg2;
- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end
