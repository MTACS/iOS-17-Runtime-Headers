
@interface IRCMPDRFenceBridge : NSObject {
    NSString * _fenceIdentifier;
    CMPedestrianFenceManager * _fenceManager;
    bool  _isFenceActive;
    bool  _isSessionStarted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSString *fenceIdentifier;
@property (nonatomic, retain) CMPedestrianFenceManager *fenceManager;
@property (nonatomic) bool isFenceActive;
@property (nonatomic) bool isSessionStarted;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;

+ (bool)isAvailable;

- (void).cxx_destruct;
- (void)clearFence;
- (void)endSession;
- (id)fenceIdentifier;
- (id)fenceManager;
- (id)initWithFenceIdentifier:(id)arg1;
- (bool)isFenceActive;
- (bool)isSessionStarted;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setFence:(float)arg1 withCompletion:(id /* block */)arg2;
- (void)setFenceIdentifier:(id)arg1;
- (void)setFenceManager:(id)arg1;
- (void)setIsFenceActive:(bool)arg1;
- (void)setIsSessionStarted:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)startSession;

@end
