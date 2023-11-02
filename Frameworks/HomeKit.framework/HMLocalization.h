
@interface HMLocalization : NSObject {
    NSBundle * _bundle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _stringTable;
}

@property (readonly, copy) NSArray *stringTable;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_updateLocalizedStrings;
- (id)getLocalizedOrCustomString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (void)handleLocaleDidChange:(id)arg1;
- (id)init;
- (id)stringTable;

@end
