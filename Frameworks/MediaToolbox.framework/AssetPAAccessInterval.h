
@interface AssetPAAccessInterval : NSObject {
    PATCCAccess * _access;
    PAAccessInterval * _accessInterval;
    PAApplication * _application;
    PAAccessLogger * _logger;
}

- (void)dealloc;
- (id)initWithClientPid:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;

@end
