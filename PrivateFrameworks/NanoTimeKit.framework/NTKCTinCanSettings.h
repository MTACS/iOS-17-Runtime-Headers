
@interface NTKCTinCanSettings : NSObject {
    bool  _tinCanEnabled;
}

@property (nonatomic, readonly) bool tinCanEnabled;

+ (id)sharedInstance;

- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (void)_readValue;
- (void)dealloc;
- (id)init;
- (bool)tinCanEnabled;

@end
