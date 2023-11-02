
@interface _TtCO15ConversationKit13CallScreening20MainAnsweringMachine : _TtCs12_SwiftObject <CNKAnsweringMachine> {
    void callServices;
    void isAnsweringMachineAvailable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void observers;
    void stateMachine;
}

@property (nonatomic, readonly) bool isEnabled;

- (bool)isEnabled;
- (void)openURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 13: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)screenCallWithUUID:(void *)arg1 manualScreening:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 15: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
