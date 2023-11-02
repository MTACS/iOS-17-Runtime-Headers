
@interface IMTranscriptLocationChatItem : IMMessagePartChatItem {
    IMMapURLLocationInfo * _locationInfo;
}

@property (nonatomic, retain) IMMapURLLocationInfo *locationInfo;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
