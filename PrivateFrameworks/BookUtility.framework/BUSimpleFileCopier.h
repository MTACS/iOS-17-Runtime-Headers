
@interface BUSimpleFileCopier : NSObject <BUFileCopier, NSFileManagerDelegate> {
    NSURL * _currentCopyItemURL;
    <BUFileCopierDelegate> * _delegate;
    NSURL * _fromURL;
}

@property (nonatomic, retain) NSURL *currentCopyItemURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BUFileCopierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fromURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)countFilesAndSizesInDirectory:(id)arg1 totalFileSize:(unsigned long long*)arg2 totalFileCount:(unsigned long long*)arg3 totalFileCountExcludeDir:(unsigned long long*)arg4;

- (void).cxx_destruct;
- (void)_finishCurrentCopyItem;
- (bool)copyToURL:(id)arg1 error:(id*)arg2;
- (bool)countTotalFileSize:(unsigned long long*)arg1 totalFileCount:(unsigned long long*)arg2;
- (id)currentCopyItemURL;
- (id)delegate;
- (bool)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;
- (id)fromURL;
- (id)initWithURL:(id)arg1;
- (void)setCurrentCopyItemURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFromURL:(id)arg1;

@end
