
@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSArray * _children;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSArray *children;
@property (getter=isFavoritesFolder, nonatomic, readonly) bool favoritesFolder;
@property (getter=isFolder, nonatomic, readonly) bool folder;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isReadingListFolder, nonatomic, readonly) bool readingListFolder;

+ (id)favoritesFolderWithChildren:(id)arg1;
+ (id)folderWithName:(id)arg1 children:(id)arg2;
+ (id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3;
+ (id)leafBookmarkWithName:(id)arg1 URL:(id)arg2;
+ (id)readingListFolderWithChildren:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (bool)_isFolderWithIdentifier:(id)arg1;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFavoritesFolder;
- (bool)isFolder;
- (bool)isReadingListFolder;
- (id)name;

@end
