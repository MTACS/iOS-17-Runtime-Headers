
@interface CNContactBufferDecoder : NSObject {
    long long  _bytesNeededToResume;
    CNContactKeyVector * _keyDescriptorToMakeAvailable;
    bool  _mutableResults;
    CNMutableContact * _pendingContact;
    NSMutableData * _resumeBuffer;
    long long  _state;
}

@property (readonly) bool hasPendingContacts;
@property (nonatomic, copy) CNContactKeyVector *keyDescriptorToMakeAvailable;
@property (nonatomic) bool mutableResults;

- (void).cxx_destruct;
- (bool)decodeContactsFromBuffer:(id)arg1 replyHandler:(id /* block */)arg2;
- (bool)hasPendingContacts;
- (id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(bool)arg2;
- (id)keyDescriptorToMakeAvailable;
- (bool)mutableResults;
- (void)setKeyDescriptorToMakeAvailable:(id)arg1;
- (void)setMutableResults:(bool)arg1;

@end
