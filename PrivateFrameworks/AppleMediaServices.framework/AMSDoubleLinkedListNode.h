
@interface AMSDoubleLinkedListNode : NSObject {
    NSString * _listIdentifier;
    AMSDoubleLinkedListNode * _next;
    id  _object;
    AMSDoubleLinkedListNode * _previous;
}

@property (nonatomic, retain) NSString *listIdentifier;
@property (nonatomic, retain) AMSDoubleLinkedListNode *next;
@property (nonatomic, retain) id object;
@property (nonatomic) AMSDoubleLinkedListNode *previous;

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
