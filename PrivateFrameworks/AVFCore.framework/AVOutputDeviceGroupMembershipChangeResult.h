
@interface AVOutputDeviceGroupMembershipChangeResult : NSObject {
    NSString * _cancellationReason;
    long long  _status;
}

@property (readonly) NSString *cancellationReason;
@property (readonly) long long status;

- (id)cancellationReason;
- (void)dealloc;
- (id)initWithStatus:(long long)arg1 cancellationReason:(id)arg2;
- (long long)status;

@end
