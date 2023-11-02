
@interface SMMediaMoment : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mediaMoment;
}

@property (nonatomic, readonly) SMArtwork *artwork;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double startTime;

- (void).cxx_destruct;
- (id)artwork;
- (double)duration;
- (id)init;
- (double)startTime;

@end
