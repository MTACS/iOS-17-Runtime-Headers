
@interface BDSSharedDataFile : NSObject {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)load:(id*)arg1;
- (bool)remove:(id*)arg1;
- (bool)save:(id)arg1 error:(id*)arg2;
- (id)url;

@end
