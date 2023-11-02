
@interface CRKBookmark : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSArray * _children;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSArray *children;
@property (getter=isFavoritesFolder, nonatomic, readonly) bool favoritesFolder;
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
- (id)childBookmarks;
- (id)children;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFavoritesFolder;
- (bool)isFolder;
- (bool)isFolderWithIdentifier:(id)arg1;
- (bool)isReadingListFolder;
- (id)name;
- (void)setChildBookmarks:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setName:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;

@end
