
@interface BKUIDevice : NSObject {
    bool  _isPad;
    int  _mainScreenClass;
}

@property (nonatomic) bool isPad;
@property (nonatomic) int mainScreenClass;

+ (id)sharedInstance;

- (id)init;
- (bool)isD10;
- (bool)isD32Sized;
- (bool)isD33;
- (bool)isIPad2;
- (bool)isIdiomPad;
- (bool)isMini;
- (bool)isN69;
- (bool)isN84;
- (bool)isPad;
- (bool)isPad6;
- (bool)isPad7;
- (bool)isZoomEnabled;
- (bool)isiPad21;
- (int)mainScreenClass;
- (void)setIsPad:(bool)arg1;
- (void)setMainScreenClass:(int)arg1;

@end
