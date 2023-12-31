
@interface ML3MusicLibrary_SortMapEntry : NSObject {
    bool  _dirty;
    NSString * _name;
    long long  _nameOrder;
    int  _nameSection;
    NSData * _sortKey;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(bool)arg5;

@end
