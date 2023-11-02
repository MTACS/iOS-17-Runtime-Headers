
@interface NTKBundleComplicationMigrationServiceDelegate : NSObject <NSXPCListenerDelegate> {
    bool  _requireEntitlement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requireEntitlement;
@property (readonly) Class superclass;

- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)requireEntitlement;
- (void)setRequireEntitlement:(bool)arg1;

@end
