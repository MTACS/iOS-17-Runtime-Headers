
@interface HMDHelper : NSObject {
    <HMDHelperExternalProtocol> * _externalProtocol;
}

@property (nonatomic, retain) <HMDHelperExternalProtocol> *externalProtocol;

+ (void)setSharedHelper:(id)arg1;
+ (id)sharedHelper;

- (void).cxx_destruct;
- (id)externalProtocol;
- (id)hashedRouteIDForIdentifier:(id)arg1;
- (id)initWithExternalProtocol:(id)arg1;
- (void)setExternalProtocol:(id)arg1;

@end
