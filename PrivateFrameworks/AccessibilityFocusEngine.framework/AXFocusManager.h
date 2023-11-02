
@interface AXFocusManager : NSObject {
    AXElement * _focusContainerForSuccessfulTypeaheadMovement;
    NSObject<OS_dispatch_queue> * _movementQueue;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSString * _typeaheadString;
}

@property (nonatomic, readonly) AXElement *currentApplication;
@property (nonatomic, retain) AXElement *focusContainerForSuccessfulTypeaheadMovement;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *movementQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } observersLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observersQueue;
@property (nonatomic, retain) NSString *typeaheadString;

- (void).cxx_destruct;
- (id)_currentFocusContainers;
- (void)_enumerateObservers:(id /* block */)arg1;
- (bool)_focusOnFocusContainer:(id)arg1;
- (void)_handleFailedFocusMovementWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2;
- (unsigned long long)_indexOfTypeaheadPIDInFocusContainers:(id)arg1;
- (id)_moveFocusContainerFocusInDirection:(long long)arg1;
- (bool)_moveFocusInFocusContainer:(id)arg1 withHeading:(unsigned long long)arg2 queryString:(id)arg3;
- (bool)_moveFocusInRemoteElement:(id)arg1 withHeading:(unsigned long long)arg2 byGroup:(bool)arg3;
- (void)_moveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2 queryString:(id)arg3 shouldWrap:(bool)arg4;
- (bool)_moveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2 shouldWrap:(bool)arg3;
- (void)_moveToElementWithHeading:(unsigned long long)arg1 queryString:(id)arg2;
- (bool)_recursiveMoveFocusInFocusContainer:(id)arg1 withHeading:(unsigned long long)arg2 byGroup:(bool)arg3;
- (bool)_recursiveMoveFocusInFocusContainer:(id)arg1 withHeading:(unsigned long long)arg2 queryString:(id)arg3;
- (void)_verifyPIDForTypeahead;
- (void)addObserver:(id)arg1;
- (id)currentApplication;
- (id)currentElement;
- (id)currentFocusContainer;
- (id)focusContainerForSuccessfulTypeaheadMovement;
- (void)focusOnSceneForTypeahead;
- (id)init;
- (void)moveFocusInsideForward:(bool)arg1;
- (void)moveFocusInsideForward:(bool)arg1 shouldWrap:(bool)arg2;
- (void)moveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2;
- (void)moveFocusWithHeading:(unsigned long long)arg1 queryString:(id)arg2;
- (id)movementQueue;
- (id)observers;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (id)observersQueue;
- (void)removeObserver:(id)arg1;
- (void)setFocusContainerForSuccessfulTypeaheadMovement:(id)arg1;
- (void)setMovementQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setObserversLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setObserversQueue:(id)arg1;
- (void)setTypeaheadString:(id)arg1;
- (id)typeaheadString;

@end
