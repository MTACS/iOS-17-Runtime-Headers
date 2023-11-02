
@interface IMSenderChatItem : IMTranscriptChatItem {
    NSString * _displayName;
    IMHandle * _handle;
    long long  _transcriptSharingMessageType;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) IMHandle *handle;
@property (nonatomic, readonly) long long transcriptSharingMessageType;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 handle:(id)arg2;
- (id)_initWithItem:(id)arg1 handle:(id)arg2 displayName:(id)arg3 transcriptSharingMessageType:(long long)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)handle;
- (void)setDisplayName:(id)arg1;
- (long long)transcriptSharingMessageType;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
