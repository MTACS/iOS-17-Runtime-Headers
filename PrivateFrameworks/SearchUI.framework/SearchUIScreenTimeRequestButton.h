
@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton {
    <NSObject> * _screentimeRequestStatusObserver;
}

@property (nonatomic, retain) <NSObject> *screentimeRequestStatusObserver;

+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (int)getRequestState;
- (id)requestIdentifier;
- (id)screentimeRequestStatusObserver;
- (void)setScreentimeRequestStatusObserver:(id)arg1;
- (void)setupSubscription;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
