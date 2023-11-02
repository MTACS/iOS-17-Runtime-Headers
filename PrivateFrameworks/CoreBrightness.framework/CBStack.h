
@interface CBStack : NSObject {
    unsigned long long  _length;
    NSObject<OS_os_log> * _logHandle;
    id  _objectToPop;
    NSMutableArray * _stack;
}

@property unsigned long long length;
@property (nonatomic, readonly) id objectToPop;
@property (nonatomic, readonly) NSMutableArray *stack;

- (void)clear;
- (void)dealloc;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)objectToPop;
- (id)popObj;
- (void)printStack;
- (void)pushObj:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (id)stack;

@end
