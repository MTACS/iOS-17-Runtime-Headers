
@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent {
    MFLibraryMessage * _libraryMessage;
}

@property (nonatomic, retain) MFLibraryMessage *libraryMessage;

- (void).cxx_destruct;
- (id)copy;
- (id)headers;
- (id)libraryContent;
- (id)libraryMessage;
- (void)setLibraryMessage:(id)arg1;

@end
