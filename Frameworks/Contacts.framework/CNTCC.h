
@interface CNTCC : NSObject {
    <CNTCC> * _tccServices;
}

@property (nonatomic, retain) <CNTCC> *tccServices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)accessPreflight;
- (void)setTccServices:(id)arg1;
- (void)simulate:(long long)arg1;
- (id)tccServices;

@end
