
@interface BDSBookWidgetInfoManager : NSObject <BDSBookWidgetInfoManagerService> {
    BDSServiceProxy * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)serviceProxy;
- (void)setBookWidgetInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setServiceProxy:(id)arg1;

@end
