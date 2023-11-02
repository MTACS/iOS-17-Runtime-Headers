
@interface SidecarMutableItem : SidecarItem {
    unsigned long long  _capacity;
    unsigned int  _complete;
    NSMutableData * _mutableData;
}

@property (getter=isComplete, readonly) bool complete;

- (void).cxx_destruct;
- (bool)appendData:(id)arg1;
- (id)data;
- (id)initWithType:(id)arg1 capacity:(unsigned long long)arg2;
- (bool)isComplete;

@end
