
@interface EKChangeTrackingClientId : NSObject {
    NSString * _customClientId;
    NSString * _suffix;
}

@property (nonatomic, readonly) CADChangeTrackingClientId *CADChangeTrackingClientId;
@property (nonatomic, readonly, copy) NSString *customClientId;
@property (nonatomic, readonly, copy) NSString *suffix;

- (void).cxx_destruct;
- (id)CADChangeTrackingClientId;
- (id)customClientId;
- (id)init;
- (id)initWithCustomClientId:(id)arg1;
- (id)initWithCustomClientId:(id)arg1 suffix:(id)arg2;
- (id)initWithSuffix:(id)arg1;
- (id)suffix;

@end
