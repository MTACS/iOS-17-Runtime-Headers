
@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate> {
    unsigned long long  _confidence;
    <GEOMotionContextDelegate> * _delegate;
    unsigned long long  _exitType;
    unsigned long long  _motionType;
    <GEOMotionContextProvider> * _provider;
}

@property (nonatomic, readonly) unsigned long long confidence;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOMotionContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long exitType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCycling;
@property (nonatomic, readonly) bool isDriving;
@property (nonatomic, readonly) bool isMoving;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) bool isWalking;
@property (nonatomic, readonly) unsigned long long motionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)confidence;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)exitType;
- (bool)isCycling;
- (bool)isDriving;
- (bool)isMoving;
- (bool)isRunning;
- (bool)isWalking;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (unsigned long long)motionType;
- (void)setDelegate:(id)arg1;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)stopMotionUpdates;

@end
