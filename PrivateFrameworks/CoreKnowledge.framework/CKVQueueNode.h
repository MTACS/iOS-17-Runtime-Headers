
@interface CKVQueueNode : NSObject {
    CKVQueueNode * _next;
    id  _value;
}

@property (nonatomic, retain) CKVQueueNode *next;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)next;
- (void)setNext:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
