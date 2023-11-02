
@interface LPThemeParametersObserver : NSObject {
    NSHashTable * _clients;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)dealloc;
- (void)didChangeDarkenColorsStatus:(id)arg1;
- (void)didChangeThemeParameters;
- (id)init;
- (void)removeClient:(id)arg1;

@end
