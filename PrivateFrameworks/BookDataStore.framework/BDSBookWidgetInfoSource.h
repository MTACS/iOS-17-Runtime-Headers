
@interface BDSBookWidgetInfoSource : NSObject <BDSBookWidgetInfoProviding> {
    <BDSServiceProtocol> * _serviceProxy;
}

@property (nonatomic, readonly) <BDSServiceProtocol> *serviceProxy;

+ (id)sharedServiceProxy;

- (void).cxx_destruct;
- (void)getBookWidgetInfoWithLimit:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)serviceProxy;

@end
