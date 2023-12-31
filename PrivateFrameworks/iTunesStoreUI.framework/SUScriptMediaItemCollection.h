
@interface SUScriptMediaItemCollection : SUScriptObject {
    NSArray * _items;
    SUScriptMediaItem * _representativeItem;
    bool  _watchingLibrary;
}

@property (readonly) long long count;
@property (readonly) NSArray *items;
@property (readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) MPMediaItemCollection *nativeCollection;
@property (readonly) SUScriptMediaItem *representativeItem;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)_beginWatchingLibraryIfNecessary;
- (id)_className;
- (void)_libraryChangedNotification:(id)arg1;
- (id)attributeKeys;
- (long long)count;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)mediaTypes;
- (id)nativeCollection;
- (id)representativeItem;
- (id)scriptAttributeKeys;

@end
