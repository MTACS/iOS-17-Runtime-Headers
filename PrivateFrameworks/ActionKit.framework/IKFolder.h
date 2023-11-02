
@interface IKFolder : NSObject {
    long long  _folderID;
    unsigned long long  _position;
    bool  _syncToMobile;
    NSString * _title;
}

@property (nonatomic) long long folderID;
@property (nonatomic) unsigned long long position;
@property (nonatomic) bool syncToMobile;
@property (nonatomic, copy) NSString *title;

+ (id)archiveFolder;
+ (id)folderWithFolderID:(long long)arg1;
+ (id)starredFolder;
+ (id)unreadFolder;

- (void)dealloc;
- (id)description;
- (long long)folderID;
- (id)init;
- (id)initWithFolderID:(long long)arg1;
- (unsigned long long)position;
- (void)setFolderID:(long long)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setSyncToMobile:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)syncToMobile;
- (id)title;

@end
