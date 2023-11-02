
@interface TSXExpositorClientExported : NSObject <TSXExpositorClientProtocol> {
    TSXExpositorClient * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXExpositorClient *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clockManagerIsAvailable;
- (void)clockManagerIsUnavailable;
- (void)gPTPManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;
- (id)object;
- (void)setObject:(id)arg1;

@end
