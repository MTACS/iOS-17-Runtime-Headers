
@interface SRUIFCardLoader : NSObject <SFResourceLoader> {
    bool  _active;
    <SRUIFCardLoaderDelegate> * _delegate;
}

@property (nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SRUIFCardLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerWithSearchFoundation;
- (void)_unregisterWithSearchFoundation;
- (bool)active;
- (id)delegate;
- (bool)loadCard:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
