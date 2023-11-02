
@interface ISStoreVersion : NSObject {
    NSURL * _redirectURL;
}

@property (nonatomic, retain) NSURL *redirectURL;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)redirectURL;
- (void)setRedirectURL:(id)arg1;

@end
