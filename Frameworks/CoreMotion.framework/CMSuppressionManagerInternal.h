
@interface CMSuppressionManagerInternal : NSObject {
    NSString * fClientID;
    void * fConnection;
    NSObject<OS_dispatch_queue> * fConnectionQueue;
    struct CMSuppressionEventStruct { 
        double timestamp; 
        long long type; 
        unsigned long long reason; 
    }  fCurrentSuppressionEvent;
    DPCManager * fDevicePresence;
    struct CMSuppressionEventStruct { 
        double timestamp; 
        long long type; 
        unsigned long long reason; 
    }  fDevicePresenceEvent;
    NSObject<OS_dispatch_queue> * fInputQueue;
    bool  fServiceEnabled;
    _PMSmartPowerNap * fSmartPowerNap;
    struct CMSuppressionEventStruct { 
        double timestamp; 
        long long type; 
        unsigned long long reason; 
    }  fSmartPowerNapEvent;
    struct Dispatcher { int (**x1)(); id x2; } * fSuppressionEventDispatcher;
    id /* block */  fSuppressionEventHandler;
    NSOperationQueue * fSuppressionEventQueue;
    unsigned long long  fSuppressionSources;
    bool  fViewObstructedDebugEnabled;
    struct CMSuppressionEventStruct { 
        double timestamp; 
        long long type; 
        unsigned long long reason; 
    }  fViewObstructedEvent;
    struct ViewObstructedState { 
        unsigned char fType; 
        struct Suppress { 
            unsigned char fType; 
            bool fShouldSuppress; 
            bool fAPAwake; 
            unsigned char fCurrentState; 
            unsigned char fOrientation; 
            unsigned char fMotionType; 
            float fLux; 
            float fPocketProbability; 
        } fSuppress; 
        float fMeanProbabilities[8]; 
    }  fViewObstructedState;
    struct Dispatcher { int (**x1)(); id x2; } * fViewObstructedStateDispatcher;
    id /* block */  fViewObstructedStateHandler;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void)teardownPrivate;

@end
