
@interface SSDoubleLinkedListNode : NSObject {
    NSString * _listIdentifier;
    SSDoubleLinkedListNode * _next;
    id  _object;
    SSDoubleLinkedListNode * _previous;
}

@property (nonatomic, retain) NSString *listIdentifier;
@property (nonatomic, retain) SSDoubleLinkedListNode *next;
@property (nonatomic, retain) id object;
@property (nonatomic, retain) SSDoubleLinkedListNode *previous;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObject:(id)arg1;
- (id)listIdentifier;
- (id)next;
- (id)object;
- (id)previous;
- (void)setListIdentifier:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setPrevious:(id)arg1;

@end
