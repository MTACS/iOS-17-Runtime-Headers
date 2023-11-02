
@interface HMDDeviceNotificationUpdate : HMFObject {
    NSMapTable * _characteristicUpdateTuples;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _notificationUpdateID;
    NSMutableArray * _notificationsCompletions;
    NSString * _requestID;
    NSMutableDictionary * _updatedMediaPropertiesByMediaProfile;
}

@property (nonatomic, readonly) NSArray *characteristicUpdateTuples;
@property (nonatomic, readonly) NSArray *completions;
@property (nonatomic, readonly) NSArray *mediaProperties;
@property (nonatomic, readonly) NSString *notificationUpdateID;
@property (nonatomic, readonly) NSString *requestID;

- (void).cxx_destruct;
- (void)_updateWithNotificationUpdateID:(id)arg1 completion:(id /* block */)arg2;
- (id)characteristicUpdateTuples;
- (id)completions;
- (id)initWithRequestID:(id)arg1;
- (id)mediaProperties;
- (id)notificationUpdateID;
- (id)requestID;
- (void)updateWithCharacteristicUpdates:(id)arg1 notificationUpdateID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateWithUpdatedMediaPropertiesByMediaResponses:(id)arg1 notificationUpdateID:(id)arg2 completion:(id /* block */)arg3;

@end
