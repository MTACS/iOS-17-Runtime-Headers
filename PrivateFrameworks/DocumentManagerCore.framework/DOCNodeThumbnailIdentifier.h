
@interface DOCNodeThumbnailIdentifier : NSObject <NSCopying> {
    id  _contentVersion;
    NSString * _fileExtension;
    unsigned long long  _folderType;
    bool  _isActionable;
    bool  _isDownloaded;
    bool  _isTopLevelSharedItem;
    NSDate * _modificationDate;
    id  _nodeIdentifier;
}

@property (retain) id contentVersion;
@property (retain) NSString *fileExtension;
@property unsigned long long folderType;
@property bool isActionable;
@property bool isDownloaded;
@property bool isTopLevelSharedItem;
@property (retain) NSDate *modificationDate;
@property (retain) id nodeIdentifier;

- (void).cxx_destruct;
- (id)contentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileExtension;
- (unsigned long long)folderType;
- (unsigned long long)hash;
- (bool)isActionable;
- (bool)isDownloaded;
- (bool)isEqual:(id)arg1;
- (bool)isTopLevelSharedItem;
- (id)modificationDate;
- (id)nodeIdentifier;
- (void)setContentVersion:(id)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setFolderType:(unsigned long long)arg1;
- (void)setIsActionable:(bool)arg1;
- (void)setIsDownloaded:(bool)arg1;
- (void)setIsTopLevelSharedItem:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNodeIdentifier:(id)arg1;

@end
