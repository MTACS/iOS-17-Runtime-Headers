
@interface MRExpanseManager : NSObject <TUConversationManagerDelegate, TUNeighborhoodActivityConduitDelegate> {
    AVAudioSession * _auxiliaryPlaybackAudioSession;
    TUNeighborhoodActivityConduit * _conduit;
    TUConversationManager * _conversationManager;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *activeTelevisionRouteID;
@property (nonatomic, retain) AVAudioSession *auxiliaryPlaybackAudioSession;
@property (nonatomic, readonly) TUNeighborhoodActivityConduit *conduit;
@property (nonatomic, readonly) TUConversationManager *conversationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool expanseHandoffSupported;
@property (nonatomic, readonly) bool expanseSessionActive;
@property (nonatomic, readonly) bool expanseSessionHasActiveActivity;
@property (nonatomic, readonly) bool expanseSessionHasRemoteActivity;
@property (nonatomic, readonly) bool expanseSessionHasScreenSharingActivity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleConversationStateChanged;
- (void)_handleExpanseSessionJoined;
- (void)_handleExpanseSessionLeft;
- (void)_notifyObserversThatExpanseSessionJoined;
- (void)_notifyObserversThatExpanseSessionLeft;
- (void)_notifyObserversThatTelevisionJoinedSession;
- (void)_notifyObserversThatTelevisionLeftSession;
- (bool)activeActivityExistsForBundle:(id)arg1;
- (id)activeConversation;
- (id)activeTelevisionRouteID;
- (void)addObserver:(id)arg1;
- (void)addTelevisionWithRouteIdentifierToSession:(id)arg1 completion:(id /* block */)arg2;
- (id)auxiliaryPlaybackAudioSession;
- (id)conduit;
- (id)conversationManager;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (void)dealloc;
- (bool)deviceIsActiveTelevision:(id)arg1;
- (bool)errorIsTelevisionCapabilitiesError:(id)arg1;
- (bool)expanseHandoffSupported;
- (bool)expanseSessionActive;
- (bool)expanseSessionHasActiveActivity;
- (bool)expanseSessionHasRemoteActivity;
- (bool)expanseSessionHasScreenSharingActivity;
- (id)initWithQueue:(id)arg1;
- (void)neighborhoodActivityConduit:(id)arg1 splitSessionEnded:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 splitSessionStarted:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 tvDeviceAppeared:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 tvDeviceDisappeared:(id)arg2;
- (id)notifyQueue;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)removeTelevisionWithRouteIdentifierFromSession:(id)arg1 completion:(id /* block */)arg2;
- (void)serverDisconnectedForConversationManager:(id)arg1;
- (void)setAuxiliaryPlaybackAudioSession:(id)arg1;

@end
