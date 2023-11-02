
@interface AMSDoubleLinkedList : NSObject {
    unsigned long long  _count;
    AMSDoubleLinkedListNode * _head;
    NSString * _listIdentifier;
    AMSDoubleLinkedListNode * _tail;
}

@property (nonatomic, readonly) NSArray *allNodes;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) AMSDoubleLinkedListNode *head;
@property (nonatomic, retain) NSString *listIdentifier;
@property (nonatomic, retain) AMSDoubleLinkedListNode *tail;

- (void).cxx_destruct;
- (id)allNodes;
- (void)appendNode:(id)arg1;
- (id)appendObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)head;
- (id)init;
- (void)insertNode:(id)arg1;
- (id)insertObject:(id)arg1;
- (id)listIdentifier;
- (void)removeAllNodes;
- (void)removeNode:(id)arg1;
- (void)setHead:(id)arg1;
- (void)setListIdentifier:(id)arg1;
- (void)setTail:(id)arg1;
- (id)tail;

@end
