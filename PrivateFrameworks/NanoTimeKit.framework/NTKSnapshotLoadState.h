
@interface NTKSnapshotLoadState : NSObject {
    NSError * _error;
    UIImage * _image;
    unsigned long long  _status;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) unsigned long long status;

+ (id)failureWithError:(id)arg1;
+ (id)loading;
+ (id)pending;
+ (id)successWithImage:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)image;
- (id)initWithStatus:(unsigned long long)arg1 image:(id)arg2 error:(id)arg3;
- (unsigned long long)status;

@end
