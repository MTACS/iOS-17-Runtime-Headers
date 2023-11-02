
@interface SHMediaLibraryChange : NSObject <NSCopying, NSSecureCoding> {
    long long  _changeType;
    NSIndexPath * _indexPath;
    <SHMediaLibraryItem> * _libraryItem;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) <SHMediaLibraryItem> *libraryItem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLibraryItem:(id)arg1 changeType:(long long)arg2 indexPath:(id)arg3;
- (long long)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryItem:(id)arg1 changeType:(long long)arg2;
- (id)initWithLibraryItem:(id)arg1 changeType:(long long)arg2 indexPath:(id)arg3;
- (bool)isConflictingChange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualChange:(id)arg1;
- (id)libraryItem;

@end
