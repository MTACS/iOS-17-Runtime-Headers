
@interface MAProgressReporterSplitter : NSObject {
    double  _previousCheckpoint;
    MAProgressReporter * _progressReporter;
}

- (void).cxx_destruct;
- (id)childProgressReporterToCheckpoint:(double)arg1;
- (id)initWithProgressReporter:(id)arg1;

@end
