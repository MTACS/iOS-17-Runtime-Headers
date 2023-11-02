
@interface TSgPTPPort : NSObject <TSXgPTPPortConnectionClient> {
    TSDgPTPPort * _implDC;
    TSXgPTPPort * _implXPC;
    id /* block */  _interruptionHandler;
}

@property (nonatomic, readonly) unsigned long long clockIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, readonly) unsigned short portNumber;
@property (nonatomic, readonly) int portRole;
@property (nonatomic, readonly) int portType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (readonly) Class superclass;

+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
+ (id)gPTPPortWithImplDC:(id)arg1;
+ (id)gPTPPortWithImplXPC:(id)arg1;
+ (id)keyPathsForValuesAffectingClockIdentifier;
+ (id)keyPathsForValuesAffectingPortNumber;
+ (id)keyPathsForValuesAffectingPortRole;
+ (id)keyPathsForValuesAffectingPortType;
+ (id)keyPathsForValuesAffectingPropertyUpdateQueue;

- (void).cxx_destruct;
- (unsigned long long)clockIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (void)interruptedConnectionForPort:(id)arg1;
- (id /* block */)interruptionHandler;
- (unsigned short)portNumber;
- (int)portRole;
- (int)portType;
- (id)propertyUpdateQueue;
- (void)serviceTerminated;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;
- (bool)startAutomaticPropertyUpdates;
- (bool)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end
