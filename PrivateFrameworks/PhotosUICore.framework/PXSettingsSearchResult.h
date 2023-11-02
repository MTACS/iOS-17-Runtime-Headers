
@interface PXSettingsSearchResult : NSObject {
    _PXSettingsIndexEntry * _entry;
}

@property (nonatomic, readonly) _PXSettingsIndexEntry *entry;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_initWithEntry:(id)arg1;
- (id)entry;
- (id)init;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)subtitle;
- (id)title;

@end
