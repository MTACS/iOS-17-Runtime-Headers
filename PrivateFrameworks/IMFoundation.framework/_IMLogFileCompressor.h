
@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray * _archivers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)init;

@end
