
@interface IMPhotoAttachmentStatusChatItem : IMTranscriptChatItem {
    unsigned long long  _numberOfPhotos;
    unsigned long long  _numberOfSavedAssets;
    unsigned long long  _numberOfVideos;
}

@property (nonatomic, readonly) unsigned long long numberOfPhotos;
@property (nonatomic, readonly) unsigned long long numberOfSavedAssets;
@property (nonatomic, readonly) unsigned long long numberOfVideos;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_guidForItem:(id)arg1;

- (id)_initWithItem:(id)arg1 numberOfPhotos:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfSavedAssets:(unsigned long long)arg4;
- (bool)_isEqualToGuid:(id)arg1 numberOfPhotos:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfSavedAssets:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (unsigned long long)numberOfPhotos;
- (unsigned long long)numberOfSavedAssets;
- (unsigned long long)numberOfVideos;
- (bool)wouldBeEqualIfInitializedWithItem:(id)arg1 numberOfPhotos:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfSavedAssets:(unsigned long long)arg4;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
