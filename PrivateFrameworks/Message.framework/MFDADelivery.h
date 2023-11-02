
@interface MFDADelivery : MFMailDelivery <EFLoggable> {
    DAMailAccount * _DAMailAccount;
    NSString * _accountID;
    NSString * _folderID;
    MFMailMessageLibrary * _library;
    NSString * _originalLongID;
    NSString * _originalMessageID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_updateBasedOnOriginalMessage:(id)arg1;
- (id)deliverSynchronously;
- (id)newMessageWriter;
- (void)setDAMailAccount:(id)arg1;

@end
