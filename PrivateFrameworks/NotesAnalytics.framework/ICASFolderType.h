
@interface ICASFolderType : NSObject <AADataType> {
    long long  _folderType;
}

@property (nonatomic, readonly) long long folderType;

- (long long)folderType;
- (id)initWithFolderType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
