
@interface AUParameterNode : NSObject {
    NSString * _displayName;
    NSString * _identifier;
    id /* block */  _impl_implementorDisplayNameWithLengthCallback;
    id /* block */  _impl_implementorStringFromValueCallback;
    id /* block */  _impl_implementorValueFromStringCallback;
    id /* block */  _impl_implementorValueObserver;
    id /* block */  _impl_implementorValueProvider;
    unsigned long long  _indexInGroup;
    void * _observerList;
    AUParameterGroup * _parentNode;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ impl_implementorDisplayNameWithLengthCallback;
@property (nonatomic, copy) id /* block */ impl_implementorStringFromValueCallback;
@property (nonatomic, copy) id /* block */ impl_implementorValueFromStringCallback;
@property (nonatomic, copy) id /* block */ impl_implementorValueObserver;
@property (nonatomic, copy) id /* block */ impl_implementorValueProvider;
@property (nonatomic, copy) id /* block */ implementorDisplayNameWithLengthCallback;
@property (nonatomic, copy) id /* block */ implementorStringFromValueCallback;
@property (nonatomic, copy) id /* block */ implementorValueFromStringCallback;
@property (nonatomic, copy) id /* block */ implementorValueObserver;
@property (nonatomic, copy) id /* block */ implementorValueProvider;
@property (nonatomic) unsigned long long indexInGroup;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic) void*observerList;
@property (nonatomic) AUParameterGroup *parentNode;

- (void).cxx_destruct;
- (void*)_addRecObserver:(id /* block */)arg1 autoObserver:(id /* block */)arg2;
- (void)_deserialize:(struct CADeserializer { struct __CFData {} *x1; char *x2; char *x3; char *x4; bool x5; }*)arg1 fromSetFullState:(bool)arg2;
- (void)_observersChanged:(bool)arg1 deltaCount:(int)arg2;
- (id)_rootParent;
- (void)_serialize:(struct CASerializer { struct __CFData {} *x1; }*)arg1;
- (void)_walkTree:(int)arg1 callback:(id /* block */)arg2;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displayNameWithLength:(long long)arg1;
- (id)identifier;
- (id /* block */)impl_implementorDisplayNameWithLengthCallback;
- (id /* block */)impl_implementorStringFromValueCallback;
- (id /* block */)impl_implementorValueFromStringCallback;
- (id /* block */)impl_implementorValueObserver;
- (id /* block */)impl_implementorValueProvider;
- (id /* block */)implementorDisplayNameWithLengthCallback;
- (id /* block */)implementorStringFromValueCallback;
- (id /* block */)implementorValueFromStringCallback;
- (id /* block */)implementorValueObserver;
- (id /* block */)implementorValueProvider;
- (unsigned long long)indexInGroup;
- (id)initWithID:(id)arg1 name:(id)arg2;
- (bool)isGroup;
- (id)keyPath;
- (void*)observerList;
- (id)parentNode;
- (void)removeParameterObserver:(void*)arg1;
- (void)setImpl_implementorDisplayNameWithLengthCallback:(id /* block */)arg1;
- (void)setImpl_implementorStringFromValueCallback:(id /* block */)arg1;
- (void)setImpl_implementorValueFromStringCallback:(id /* block */)arg1;
- (void)setImpl_implementorValueObserver:(id /* block */)arg1;
- (void)setImpl_implementorValueProvider:(id /* block */)arg1;
- (void)setImplementorDisplayNameWithLengthCallback:(id /* block */)arg1;
- (void)setImplementorStringFromValueCallback:(id /* block */)arg1;
- (void)setImplementorValueFromStringCallback:(id /* block */)arg1;
- (void)setImplementorValueObserver:(id /* block */)arg1;
- (void)setImplementorValueProvider:(id /* block */)arg1;
- (void)setIndexInGroup:(unsigned long long)arg1;
- (void)setObserverList:(void*)arg1;
- (void)setParentNode:(id)arg1;
- (void*)tokenByAddingParameterAutomationObserver:(id /* block */)arg1;
- (void*)tokenByAddingParameterObserver:(id /* block */)arg1;
- (void*)tokenByAddingParameterRecordingObserver:(id /* block */)arg1;

@end
