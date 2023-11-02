
@interface GCHIDInputElement : NSObject {
    HIDElement * _element;
    struct Observer { 
        id _handler; 
        long long _scaleType; 
        struct { 
            struct Observer {} *tqe_next; 
            struct Observer {} **tqe_prev; 
        } pointers; 
    }  _firstObserver;
    struct ObserverList { 
        struct Observer {} *tqh_first; 
        struct Observer {} **tqh_last; 
    }  _observers;
    struct __IOHIDValue { } * _value;
}

@property (readonly) HIDElement *element;
@property (nonatomic, readonly) struct __IOHIDValue { }*value;

- (void).cxx_destruct;
- (void)addScaled:(long long)arg1 valueChangedHandler:(id /* block */)arg2;
- (void)addValueChangedHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)element;
- (unsigned long long)hash;
- (id)init;
- (id)initWithElement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)registerScaled:(long long)arg1 valueChangedHandler:(id /* block */)arg2;
- (id)registerValueChangedHandler:(id /* block */)arg1;
- (double)scaledValue:(long long)arg1;
- (struct __IOHIDValue { }*)value;

@end
