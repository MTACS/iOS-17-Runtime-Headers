
@interface GCHIDDeviceInput : NSObject {
    bool  _activated;
    unsigned long long  _cachedDeviceRegistryEntryID;
    id /* block */  _cancelHandler;
    NSMutableArray * _changedElements;
    NSSet * _elements;
    id /* block */  _inputHandler;
    struct __IOHIDQueue { } * _queue;
    bool  _suspended;
}

@property (readonly) struct __IOHIDDevice { }*deviceRef;
@property (readonly) NSSet *elements;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)dealloc;
- (struct __IOHIDDevice { }*)deviceRef;
- (id)elements;
- (id)init;
- (id)initWithHIDDevice:(id)arg1;
- (id)initWithIOHIDDevice:(struct __IOHIDDevice { }*)arg1;
- (bool)isSuspended;
- (void)setBatchInputElementHandler:(id /* block */)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInputElementMatching:(id)arg1;
- (void)setInputElements:(id)arg1;
- (void)setSuspended:(bool)arg1;

@end
