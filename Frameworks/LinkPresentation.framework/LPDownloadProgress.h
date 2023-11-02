
@interface LPDownloadProgress : NSObject {
    bool  _isFinished;
    double  _progress;
    NSString * _subtitle;
}

@property (nonatomic) bool isFinished;
@property (nonatomic) double progress;
@property (nonatomic, retain) NSString *subtitle;

- (void).cxx_destruct;
- (id)initWithProgress:(double)arg1 subtitle:(id)arg2 isFinished:(bool)arg3;
- (bool)isFinished;
- (double)progress;
- (void)setIsFinished:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
