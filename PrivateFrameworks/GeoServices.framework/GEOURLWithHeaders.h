
@interface GEOURLWithHeaders : NSObject {
    NSURL * _URL;
    NSDictionary * _headerFields;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *headerFields;

- (void).cxx_destruct;
- (id)URL;
- (id)headerFields;
- (id)init;
- (id)initWithURL:(id)arg1 headerFields:(id)arg2;

@end
