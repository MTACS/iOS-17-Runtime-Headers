
@interface NMBUIMediaTableCellDownloadState : NSObject {
    double  _progress;
    unsigned long long  _state;
}

@property (nonatomic) double progress;
@property (nonatomic) unsigned long long state;

- (id)initWithState:(unsigned long long)arg1 progress:(double)arg2;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
