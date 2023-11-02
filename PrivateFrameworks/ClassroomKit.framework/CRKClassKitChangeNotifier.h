
@interface CRKClassKitChangeNotifier : NSObject {
    <CRKClassKitChangeNotifierDelegate> * _delegate;
    id  _generalObserverToken;
    NSSet * _observedTrustedPersonIDs;
    NSObject<CRKClassKitRosterRequirements> * _requirements;
    id  _trustedPersonObserverToken;
}

@property (nonatomic) <CRKClassKitChangeNotifierDelegate> *delegate;
@property (nonatomic, retain) id generalObserverToken;
@property (nonatomic, copy) NSSet *observedTrustedPersonIDs;
@property (nonatomic, readonly) NSObject<CRKClassKitRosterRequirements> *requirements;
@property (nonatomic, retain) id trustedPersonObserverToken;

- (void).cxx_destruct;
- (void)dataChanged;
- (void)dealloc;
- (id)delegate;
- (id)generalObserverToken;
- (id)initWithRequirements:(id)arg1;
- (id /* block */)makeObserverBlock;
- (id)observedTrustedPersonIDs;
- (id)requirements;
- (void)setDelegate:(id)arg1;
- (void)setGeneralObserverToken:(id)arg1;
- (void)setObservedTrustedPersonIDs:(id)arg1;
- (void)setTrustedPersonObserverToken:(id)arg1;
- (void)startObservingGeneralChanges;
- (void)stopObservingGeneralChanges;
- (void)stopObservingTrustedPersons;
- (id)trustedPersonIDsInRoster:(id)arg1;
- (id)trustedPersonObserverToken;
- (bool)updateObservedTrustedPersonIDsWithRoster:(id)arg1;

@end
