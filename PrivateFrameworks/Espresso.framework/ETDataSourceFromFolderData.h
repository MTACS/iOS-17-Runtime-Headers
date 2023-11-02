
@interface ETDataSourceFromFolderData : NSObject <ETDataSource> {
    bool  _balanceClassesForTraining;
    NSMutableArray * _classNames;
    NSMutableDictionary * _folderToImages;
    NSArray * _imageFileNames;
    NSString * _imagesDir;
    int  _numberOfClasses;
    NSMutableDictionary * _pathToClassIndex;
}

@property bool balanceClassesForTraining;
@property (nonatomic, retain) NSMutableArray *classNames;
@property (nonatomic, retain) NSMutableDictionary *folderToImages;
@property (nonatomic, retain) NSArray *imageFileNames;
@property (nonatomic, retain) NSString *imagesDir;
@property int numberOfClasses;
@property (nonatomic, retain) NSMutableDictionary *pathToClassIndex;

- (void).cxx_destruct;
- (bool)balanceClassesForTraining;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })bufferWithPath:(id)arg1;
- (id)classNames;
- (id)dataPointAtIndex:(int)arg1;
- (id)folderToImages;
- (id)imageFileNames;
- (id)imagesDir;
- (id)initWithFolder:(id)arg1 balanceClassesForTraining:(bool)arg2;
- (int)numberOfClasses;
- (int)numberOfDataPoints;
- (id)pathToClassIndex;
- (void)setBalanceClassesForTraining:(bool)arg1;
- (void)setClassNames:(id)arg1;
- (void)setFolderToImages:(id)arg1;
- (void)setImageFileNames:(id)arg1;
- (void)setImagesDir:(id)arg1;
- (void)setNumberOfClasses:(int)arg1;
- (void)setPathToClassIndex:(id)arg1;

@end
