
@interface SCRCComposedCharEnumerator : NSEnumerator {
    bool  _done;
    unsigned long long  _indexOfCurrentComposedCharacter;
    NSString * _string;
}

- (void).cxx_destruct;
- (id)allObjects;
- (id)initWithString:(id)arg1;
- (id)nextObject;

@end
