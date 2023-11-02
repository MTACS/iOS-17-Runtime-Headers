
@interface MTLMessage : NSObject {
    NSString * _string;
    unsigned long long  _type;
}

@property (readonly, retain) NSString *string;
@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)init:(unsigned long long)arg1 message:(id)arg2;
- (id)string;
- (unsigned long long)type;

@end
