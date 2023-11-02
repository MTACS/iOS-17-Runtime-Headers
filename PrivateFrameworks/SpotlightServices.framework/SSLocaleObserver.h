
@interface SSLocaleObserver : NSObject {
    NSLocale * _currentLocale;
    bool  _isCJK;
    NSArray * _preferredLanguages;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)currentLocaleWithPreferredLanguagesBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)update;

@end
