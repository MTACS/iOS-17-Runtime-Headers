
@interface _PHVariationInMemoryCachedValue : NSObject {
    NSDate * _expectedDate;
    NSURL * _fileURL;
    NSDictionary * _info;
}

@property (nonatomic, readonly) NSDate *expectedDate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (id)_currentFileModificationDate;
- (id)expectedDate;
- (id)fileURL;
- (id)info;
- (id)initWithInfo:(id)arg1 fileURL:(id)arg2;
- (bool)isValid;

@end
