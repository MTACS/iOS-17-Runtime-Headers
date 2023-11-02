
@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MFMailMessageLibrary * _library;
    MFMessage * _message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFMailMessageLibrary *library;
@property (nonatomic, retain) MFMessage *message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataConsumerForPart:(id)arg1;
- (id)library;
- (id)message;
- (void)setLibrary:(id)arg1;
- (void)setMessage:(id)arg1;

@end
