
@interface CSLPRFTwoWaySyncSetting : NSObject {
    id  _defaultValue;
    <CSLPRFTwoWaySyncSettingDelegate> * _delegate;
    NPSDomainAccessor * _domainAccessor;
    NSString * _key;
    char * _notificationName;
    int  _notifyToken;
    NPSManager * _syncManager;
}

@property (nonatomic, readonly) id defaultValue;
@property (nonatomic) <CSLPRFTwoWaySyncSettingDelegate> *delegate;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultValue;
- (id)delegate;
- (id)description;
- (id)domainAccessor;
- (void)handleDidUnpair;
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 notification:(const char *)arg3;
- (id)key;
- (void)migrate:(id)arg1 withMapping:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)safeValueOfType:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)syncManager;
- (id)value;

@end
