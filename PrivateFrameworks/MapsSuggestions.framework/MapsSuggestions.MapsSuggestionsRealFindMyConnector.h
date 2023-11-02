
@interface MapsSuggestions.MapsSuggestionsRealFindMyConnector : NSObject <MapsSuggestions.MapsSuggestionsFindMyConnector> {
    void findMySession;
    void uniqueName;
}

@property (nonatomic, copy) NSString *uniqueName;

- (void).cxx_destruct;
- (id)init;
- (void)latestLocationFor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 23: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, unsigned long, unsigned long, out BOOL, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)listOfFriendsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)locationFor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 23: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, unsigned long, unsigned long, out BOOL, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setUniqueName:(id)arg1;
- (id)uniqueName;

@end
