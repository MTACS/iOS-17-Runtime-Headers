
@interface HMDAnalyticsHAPServiceData : HMFObject {
    bool  _isPrimary;
    bool  _ownerUser;
    NSString * _serviceType;
}

@property (nonatomic, readonly) bool isPrimary;
@property (nonatomic, readonly) bool ownerUser;
@property (nonatomic, readonly) NSString *serviceType;

- (void).cxx_destruct;
- (id)initWithServiceType:(id)arg1 isPrimary:(bool)arg2 ownerUser:(bool)arg3;
- (bool)isPrimary;
- (bool)ownerUser;
- (id)serviceType;

@end
