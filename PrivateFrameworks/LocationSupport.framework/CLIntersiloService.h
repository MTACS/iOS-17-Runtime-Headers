
@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse> {
    CLSilo * _silo;
    bool  _valid;
    CLServiceVendor * _vendor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLSilo *silo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CLIntersiloUniverse> *universe;
@property (nonatomic) bool valid;
@property (nonatomic, readonly) CLServiceVendor *vendor;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2;
- (void)setSilo:(id)arg1;
- (void)setValid:(bool)arg1;
- (void)setVendor:(id)arg1;
- (id)silo;
- (id)universe;
- (bool)valid;
- (id)vendor;

@end
