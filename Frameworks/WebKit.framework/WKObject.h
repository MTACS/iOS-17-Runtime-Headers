
@interface WKObject : NSProxy <WKObject> {
    bool  _hasInitializedTarget;
    struct RetainPtr<NSObject> { 
        void *m_ptr; 
    }  _target;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_web_createTarget;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isNSArray__;
- (bool)isNSCFConstantString__;
- (bool)isNSData__;
- (bool)isNSDate__;
- (bool)isNSDictionary__;
- (bool)isNSNumber__;
- (bool)isNSObject__;
- (bool)isNSOrderedSet__;
- (bool)isNSSet__;
- (bool)isNSString__;
- (bool)isNSTimeZone__;
- (bool)isNSValue__;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
