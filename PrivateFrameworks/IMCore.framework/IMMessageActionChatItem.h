
@interface IMMessageActionChatItem : IMTranscriptChatItem {
    IMHandle * _otherHandle;
    IMHandle * _sender;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) IMHandle *otherHandle;
@property (nonatomic, readonly) IMHandle *sender;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)otherHandle;
- (id)sender;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
