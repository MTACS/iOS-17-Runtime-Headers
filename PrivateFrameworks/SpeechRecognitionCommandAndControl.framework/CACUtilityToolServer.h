
@interface CACUtilityToolServer : NSObject {
    NSObject<OS_xpc_object> * _feedbackListener;
    NSString * _phoneticAlternative;
    NSObject<OS_dispatch_queue> * _toolServerDispatchQueue;
    NSMutableSet * _xpcClients;
}

@property (nonatomic, retain) NSString *phoneticAlternative;
@property (nonatomic, retain) NSMutableSet *xpcClients;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_getNumbersForElements;
- (void)addClient:(id)arg1;
- (id)dictationStatus;
- (id)drillStatus;
- (id)gridNumberToHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayID:(unsigned int)arg2;
- (id)init;
- (id)listeningStatus;
- (void)notifyClients:(id)arg1;
- (void)notifyCorrectionForString;
- (void)notifyDictationModeChanged;
- (void)notifyDidDictateText;
- (void)notifyDrilled;
- (void)notifyListeningStatusChanged;
- (void)notifyNumbersForOnboardingElements;
- (void)notifyOverlayStatusChanged;
- (void)notifyRecognizedCommandIdentifier;
- (id)numbersForOnboardingElements;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlayStatus;
- (id)phoneticAlternative;
- (id)recognizedCommandIdentifier;
- (void)removeClient:(id)arg1;
- (void)setPhoneticAlternative:(id)arg1;
- (void)setXpcClients:(id)arg1;
- (void)startObserving;
- (id)xpcClients;

@end
