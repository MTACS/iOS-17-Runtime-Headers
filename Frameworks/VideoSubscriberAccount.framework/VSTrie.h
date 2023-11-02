
@interface VSTrie : NSObject {
    VSTrieNode * _root;
}

@property (nonatomic, retain) VSTrieNode *root;

- (void).cxx_destruct;
- (id)init;
- (void)insertString:(id)arg1 withAssociatedObject:(id)arg2;
- (id)objectsMatchingPrefix:(id)arg1;
- (id)root;
- (void)setRoot:(id)arg1;

@end
