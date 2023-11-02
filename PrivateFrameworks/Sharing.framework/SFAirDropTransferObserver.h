
@interface SFAirDropTransferObserver : NSObject <SFAirDropTransferObserverDelegate> {
    <SFAirDropTransferObserverDelegate> * _delegate;
    bool  _isModern;
    _SFAirDropTransferObserver * _legacyObserver;
    _TtC7Sharing33_SFAirDropTransferObserverAdaptor * _modernObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAirDropTransferObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isModern;
@property (nonatomic, retain) _SFAirDropTransferObserver *legacyObserver;
@property (nonatomic, retain) _TtC7Sharing33_SFAirDropTransferObserverAdaptor *modernObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (bool)isModern;
- (id)legacyObserver;
- (id)modernObserver;
- (void)removedTransfer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsModern:(bool)arg1;
- (void)setLegacyObserver:(id)arg1;
- (void)setModernObserver:(id)arg1;
- (void)updatedTransfer:(id)arg1;

@end
