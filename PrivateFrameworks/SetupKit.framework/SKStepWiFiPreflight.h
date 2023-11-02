
@interface SKStepWiFiPreflight : NSObject <CUEnvironmentable, CULabelable, SKStepable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUEnvironment * _environment;
    NSString * _label;
    bool  _preventAppleWiFi;
    id /* block */  _skCompletionHandler;
    <CUMessaging> * _skMessaging;
    SKSetupBase * _skSetupObject;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) CUEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool preventAppleWiFi;
@property (nonatomic, copy) id /* block */ skCompletionHandler;
@property (nonatomic, retain) <CUMessaging> *skMessaging;
@property (nonatomic) SKSetupBase *skSetupObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (bool)checkWiFiAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)environment;
- (id)init;
- (void)invalidate;
- (id)label;
- (bool)preventAppleWiFi;
- (void)setDispatchQueue:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPreventAppleWiFi:(bool)arg1;
- (void)setSkCompletionHandler:(id /* block */)arg1;
- (void)setSkMessaging:(id)arg1;
- (void)setSkSetupObject:(id)arg1;
- (id /* block */)skCompletionHandler;
- (id)skMessaging;
- (id)skSetupObject;

@end
