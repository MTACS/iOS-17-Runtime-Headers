
@interface CLSLocationOfInterestTransition : NSObject {
    NSUUID * _identifier;
    NSDateInterval * _transitionInterval;
    long long  _transportationMode;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDateInterval *transitionInterval;
@property (nonatomic, readonly) long long transportationMode;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 transitionInterval:(id)arg2 transportationMode:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)transitionInterval;
- (long long)transportationMode;

@end
