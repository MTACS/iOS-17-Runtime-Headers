
@interface ICASFolderLabelType : NSObject <AADataType> {
    long long  _folderLabelType;
}

@property (nonatomic, readonly) long long folderLabelType;

- (long long)folderLabelType;
- (id)initWithFolderLabelType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
