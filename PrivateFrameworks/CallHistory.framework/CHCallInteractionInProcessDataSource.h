
@interface CHCallInteractionInProcessDataSource : NSObject <CHCallInteractionDataSource> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    CHNotifyObserver * _callInteractionObserver;
    <CHCallInteractionDataSourceDelegate> * _delegate;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) CHNotifyObserver *callInteractionObserver;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CHCallInteractionDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)callInteractionObserver;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
