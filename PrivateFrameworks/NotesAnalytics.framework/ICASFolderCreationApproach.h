
@interface ICASFolderCreationApproach : NSObject <AADataType> {
    long long  _folderCreationApproach;
}

@property (nonatomic, readonly) long long folderCreationApproach;

- (long long)folderCreationApproach;
- (id)initWithFolderCreationApproach:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
