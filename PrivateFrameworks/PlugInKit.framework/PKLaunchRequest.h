
@interface PKLaunchRequest : NSObject <PKLaunchRequest> {
    <PKPersona> * _launchPersona;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <PKPersona> *launchPersona;
@property (readonly) Class superclass;
@property (copy) NSUUID *uuid;

+ (id)launchRequestWithUUID:(id)arg1 launchPersona:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithUUID:(id)arg1 launchPersona:(id)arg2;
- (id)launchPersona;
- (void)setLaunchPersona:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
