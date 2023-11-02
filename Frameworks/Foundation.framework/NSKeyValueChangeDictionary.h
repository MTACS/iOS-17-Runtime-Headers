
@interface NSKeyValueChangeDictionary : NSDictionary {
    struct { 
        unsigned long long kind; 
        NSObject *oldValue; 
        NSObject *newValue; 
        NSIndexSet *indexes; 
        id extraData; 
    }  _details;
    bool  _isPriorNotification;
    bool  _isRetainingObjects;
    NSObject * _originalObservable;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithDetailsNoCopy:(struct { unsigned long long x1; id x2; id x3; id x4; id x5; })arg1 originalObservable:(id)arg2 isPriorNotification:(bool)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)retainObjects;
- (void)setDetailsNoCopy:(struct { unsigned long long x1; id x2; id x3; id x4; id x5; })arg1 originalObservable:(id)arg2;
- (void)setOriginalObservable:(id)arg1;

@end
