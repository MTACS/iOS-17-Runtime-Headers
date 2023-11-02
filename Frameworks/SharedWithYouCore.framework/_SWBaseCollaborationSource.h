
@interface _SWBaseCollaborationSource : NSObject <NSFileProviderServiceSource, NSFileProviderServiceSource_Private, NSXPCListenerDelegate> {
    NSFileProviderDomain * _domain;
    <_SWFileProviderCollaborationProviding> * _extension;
    NSString * _itemIdentifier;
    NSHashTable * _listeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderDomain *domain;
@property (nonatomic, readonly) <_SWFileProviderCollaborationProviding> *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly, copy) NSString *requiredEntitlement;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)domain;
- (id)extension;
- (id)initWithItemIdentifier:(id)arg1 domain:(id)arg2 extension:(id)arg3;
- (id)interface;
- (id)itemIdentifier;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;

@end
