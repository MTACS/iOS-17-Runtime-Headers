
@interface SBIconPreviousLocationInfo : NSObject {
    SBFolder * _folder;
    NSString * _folderName;
}

@property (nonatomic) SBFolder *folder;
@property (nonatomic, copy) NSString *folderName;

- (void).cxx_destruct;
- (id)folder;
- (id)folderName;
- (void)setFolder:(id)arg1;
- (void)setFolderName:(id)arg1;

@end
