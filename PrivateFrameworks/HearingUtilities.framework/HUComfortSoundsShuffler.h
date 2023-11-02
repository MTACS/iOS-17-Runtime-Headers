
@interface HUComfortSoundsShuffler : NSObject {
    NSMutableArray * _array;
    unsigned long long  _index;
}

+ (id)shufflerWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithArray:(id)arg1;
- (id)nextObject;
- (void)shuffle;

@end
