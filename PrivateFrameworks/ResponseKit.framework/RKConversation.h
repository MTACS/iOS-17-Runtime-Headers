
@interface RKConversation : NSObject {
    NSArray * _messages;
    unsigned long long  _type;
}

@property (readonly, copy) NSArray *messages;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithString:(unsigned long long)arg1 messages:(id)arg2;
- (id)messages;
- (unsigned long long)type;

@end
