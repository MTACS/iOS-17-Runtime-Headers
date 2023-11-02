
@protocol PHAPhotoLibraryTask <PHATask>

@required

- (bool)runWithPhotoLibrary:(PHPhotoLibrary *)arg1 analytics:(CPAnalytics *)arg2 progressReporter:(MAProgressReporter *)arg3 error:(id*)arg4;
- (bool)shouldRunWithPhotoLibrary:(PHPhotoLibrary *)arg1;

@end
