
@interface _CNLazyArrayFastEnumerationSource : NSObject <_CNLazyArrayOperation> {
    unsigned long long  _count;
    <NSFastEnumeration> * _fastEnumeration;
    bool  _firstCall;
    unsigned long long  _index;
    long long  _mutationsPtrValue;
    id  _stackbuf;
    /* Warning: unhandled struct encoding: '{?="state"Q"itemsPtr"^@"mutationsPtr"^Q"extra"[5Q]}' */ struct { 
        unsigned long long state; 
        mutationsPtr **itemsPtr; 
    }  _state;
}

- (void).cxx_destruct;
- (void)fillBuffer;
- (id)initWithFastEnumeration:(id)arg1;
- (id)nextObject;

@end
