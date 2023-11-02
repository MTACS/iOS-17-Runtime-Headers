
@interface CRKFileActionPair : NSObject {
    NSURL * _destinationURL;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSURL *sourceURL;

- (void).cxx_destruct;
- (id)destinationURL;
- (unsigned long long)hash;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sourceURL;

@end
