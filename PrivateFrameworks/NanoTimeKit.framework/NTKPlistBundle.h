
@interface NTKPlistBundle : NSObject {
    NSBundle * _bundle;
    NSString * _plistFileName;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) NSString *plistFileName;

- (void).cxx_destruct;
- (id)bundle;
- (id)description;
- (id)initWithPlist:(id)arg1 bundle:(id)arg2;
- (id)plistFileName;
- (void)setBundle:(id)arg1;
- (void)setPlistFileName:(id)arg1;

@end
