
@interface REStringScriptBuffer : NSObject <REScriptBuffer> {
    unsigned long long  _index;
    NSString * _string;
}

@property (nonatomic, readonly) unsigned short current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentForLine:(unsigned long long)arg1;
- (unsigned short)current;
- (id)initWithString:(id)arg1;
- (bool)isEmpty;
- (void)next;

@end
