
@interface ICThumbnailGeneratorNote : ICThumbnailGenerator {
    NSObject<OS_dispatch_queue> * _completionQueue;
    double  _margin;
    double  _maximumWidth;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) double margin;
@property (nonatomic) double maximumWidth;

- (void).cxx_destruct;
- (id)completionQueue;
- (id)generateThumbnailImageWithNote:(id)arg1 configuration:(id)arg2;
- (void)generateThumbnailWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (double)margin;
- (double)maximumWidth;
- (void)setMargin:(double)arg1;
- (void)setMaximumWidth:(double)arg1;

@end
