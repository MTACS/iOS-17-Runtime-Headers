
@interface BLSFrameSpecifierModel : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _specifiers;
    unsigned long long  _stateHandler;
}

@property (readonly) NSArray *specifiers;

- (void).cxx_destruct;
- (void)addSpecifiers:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)purgeAllButOneSpecifiersBeforeDate:(id)arg1;
- (void)purgeAllSpecifiersOnOrAfterDate:(id)arg1;
- (id)specifierAtPresentationDate:(id)arg1;
- (id)specifiers;

@end
