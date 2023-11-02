
@interface _DNDSPendingMessageRecipients : NSObject <NSCopying> {
    NSSet * _deviceIdentifiers;
    NSDate * _lastUpdateDate;
}

@property (nonatomic, readonly, copy) NSSet *deviceIdentifiers;
@property (nonatomic, readonly, copy) NSDate *lastUpdateDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifiers;
- (id)initWithLastUpdateDate:(id)arg1 deviceIdentifiers:(id)arg2;
- (id)lastUpdateDate;

@end
