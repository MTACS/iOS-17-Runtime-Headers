
@protocol HMDResidentAppleMediaStateManagerDelegate <NSObject>

@required

- (void)enableMediaNotifications:(void *)arg1 directlyOnMediaAccessory:(void *)arg2 forStateManager:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: bool, HMDAppleMediaAccessory *, HMDResidentAppleMediaStateManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)readProfileState:(NSArray *)arg1 viaDevice:(HMDDevice *)arg2 forStateManager:(HMDResidentAppleMediaStateManager *)arg3;

@end
