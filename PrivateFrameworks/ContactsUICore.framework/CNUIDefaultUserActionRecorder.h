
@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder> {
    <CNUIDefaultUserActionRecorderEventFactory> * _eventFactory;
    CRRecentContactsLibrary * _library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUIDefaultUserActionRecorderEventFactory> *eventFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CRRecentContactsLibrary *library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventFactory;
- (id)init;
- (id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2;
- (id)library;
- (void)recordUserAction:(id)arg1;

@end