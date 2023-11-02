
@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum> {
    NSDateInterval * _dateInterval;
    NSUUID * _datumIdentifier;
    NSData * _resumeContext;
    id /* block */  _resumeContextProvider;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSUUID *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *resumeContext;
@property (nonatomic, readonly, copy) id /* block */ resumeContextProvider;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)datumIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (id)resumeContext;
- (id /* block */)resumeContextProvider;

@end
