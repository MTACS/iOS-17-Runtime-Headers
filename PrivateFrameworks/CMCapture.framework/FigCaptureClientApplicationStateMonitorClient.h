
@interface FigCaptureClientApplicationStateMonitorClient : NSObject {
    id /* block */  _applicationAndLayoutStateHandler;
    NSString * _applicationID;
    NSString * _applicationIDToInheritAppStateFrom;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSArray * _avconferenceClientApplicationIDs;
    int  _clientType;
    NSString * _extensionRootHostApplicationID;
    int  _extensionRootHostPID;
    bool  _hasBackgroundCameraAccess;
    bool  _isExtension;
    bool  _isForThirdPartyTorch;
    bool  _isSwiftPlaygroundsDevelopmentApp;
    int  _pid;
    int  _pidToInheritAppStateFrom;
}

@property (nonatomic, readonly) id /* block */ applicationAndLayoutStateHandler;
@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, retain) NSString *applicationIDToInheritAppStateFrom;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) NSArray *avconferenceClientApplicationIDs;
@property (getter=hasBackgroundCameraAccess, nonatomic, readonly) bool backgroundCameraAccess;
@property (nonatomic, readonly) int clientType;
@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (nonatomic, readonly) NSString *extensionRootHostApplicationID;
@property (nonatomic, readonly) int extensionRootHostPID;
@property (getter=isForThirdPartyTorch, nonatomic, readonly) bool forThirdPartyTorch;
@property (nonatomic, readonly) int pid;
@property (nonatomic) int pidToInheritAppStateFrom;
@property (getter=isSwiftPlaygroundsDevelopmentApp, nonatomic, readonly) bool swiftPlaygroundsDevelopmentApp;

- (id /* block */)applicationAndLayoutStateHandler;
- (id)applicationID;
- (id)applicationIDToInheritAppStateFrom;
- (struct { unsigned int x1[8]; })auditToken;
- (id)avconferenceClientApplicationIDs;
- (int)clientType;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)extensionRootHostApplicationID;
- (int)extensionRootHostPID;
- (bool)hasBackgroundCameraAccess;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 forThirdPartyTorch:(bool)arg2 applicationAndLayoutStateHandler:(id /* block */)arg3;
- (void)invalidate;
- (bool)isExtension;
- (bool)isForThirdPartyTorch;
- (bool)isSwiftPlaygroundsDevelopmentApp;
- (int)pid;
- (int)pidToInheritAppStateFrom;
- (void)setApplicationIDToInheritAppStateFrom:(id)arg1;
- (void)setPidToInheritAppStateFrom:(int)arg1;

@end
