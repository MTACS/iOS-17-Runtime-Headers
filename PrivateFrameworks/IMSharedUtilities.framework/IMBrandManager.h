
@interface IMBrandManager : NSObject {
    BSUIBrandManager * _brandManager;
}

@property (nonatomic, retain) BSUIBrandManager *brandManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)brandManager;
- (void)brandWithURI:(id)arg1 completion:(id /* block */)arg2;
- (void)setBrandManager:(id)arg1;

@end
