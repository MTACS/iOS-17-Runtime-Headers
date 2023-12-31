
@interface IMSMSSpamChatItem : IMTranscriptChatItem {
    NSString * _extensionName;
}

@property (nonatomic, readonly) NSString *extensionName;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 withExtensionName:(id)arg2;
- (id)extensionName;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
