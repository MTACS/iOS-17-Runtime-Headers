
@interface __NSSingleObjectEnumerator : NSEnumerator {
    id  _theCollection;
    id  _theObjectToReturn;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithObject:(id)arg1 collection:(id)arg2;
- (id)nextObject;

@end
