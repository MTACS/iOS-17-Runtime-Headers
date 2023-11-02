
@interface MapsSuggestionsShortcutAtMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    struct vector<MapsSuggestionsEntryType, std::allocator<MapsSuggestionsEntryType>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<MapsSuggestionsEntryType *, std::allocator<MapsSuggestionsEntryType>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _types;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithSacrificedTypes:(const void*)arg1;

@end
