
@interface IMItemChatContext : NSObject {
    IMHandle * _otherHandle;
    IMHandle * _senderHandle;
}

@property (nonatomic, retain) IMHandle *otherHandle;
@property (nonatomic, retain) IMHandle *senderHandle;

- (void).cxx_destruct;
- (void)dealloc;
- (id)otherHandle;
- (id)senderHandle;
- (void)setOtherHandle:(id)arg1;
- (void)setSenderHandle:(id)arg1;

@end
