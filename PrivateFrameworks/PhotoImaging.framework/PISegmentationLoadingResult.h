
@interface PISegmentationLoadingResult : NSObject {
    NSError * _error;
    id  _object;
    bool  _success;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)error;
- (id)initWithObject:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (id)object;
- (bool)success;

@end
