
@interface MTSearchSeeAllSection : NSObject {
    void contentType;
    void nextPage;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSString *nextPage;

- (void).cxx_destruct;
- (long long)contentType;
- (id)init;
- (id)initWithContentType:(long long)arg1 nextPage:(id)arg2;
- (id)nextPage;

@end
