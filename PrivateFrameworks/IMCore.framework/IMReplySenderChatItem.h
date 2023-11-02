
@interface IMReplySenderChatItem : IMSenderChatItem {
    NSString * _threadIdentifier;
}

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 handle:(id)arg2 threadIdentifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)threadIdentifier;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
