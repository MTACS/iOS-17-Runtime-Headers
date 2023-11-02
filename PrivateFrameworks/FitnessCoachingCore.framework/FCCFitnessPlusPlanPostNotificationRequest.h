
@interface FCCFitnessPlusPlanPostNotificationRequest : NSObject <FCCDataSerializable> {
    bool  _force;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool force;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)description;
- (bool)force;
- (id)initWithTransportData:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithType:(id)arg1 force:(bool)arg2;
- (id)transportData;
- (id)type;

@end
