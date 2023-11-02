
@interface _SFFolderPickerItem : NSObject {
    WebBookmark * _bookmark;
    unsigned long long  _depth;
    SFSyntheticBookmarkFolder * _syntheticFolder;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) unsigned long long depth;
@property (nonatomic, readonly) SFSyntheticBookmarkFolder *syntheticFolder;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_initWithBookmark:(id)arg1 syntheticFolder:(id)arg2 depth:(unsigned long long)arg3;
- (id)bookmark;
- (unsigned long long)depth;
- (id)syntheticFolder;
- (id)title;

@end
