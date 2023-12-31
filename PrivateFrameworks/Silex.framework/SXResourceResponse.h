
@interface SXResourceResponse : NSObject {
    NSError * _error;
    NSURL * _fileURL;
    NSString * _resourceIdentifier;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSString *resourceIdentifier;

- (void).cxx_destruct;
- (id)error;
- (id)fileURL;
- (id)resourceIdentifier;
- (void)setError:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setResourceIdentifier:(id)arg1;

@end
