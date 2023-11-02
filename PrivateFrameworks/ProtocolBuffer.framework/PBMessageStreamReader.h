
@interface PBMessageStreamReader : NSObject {
    Class  _classOfNextMessage;
    unsigned long long  _position;
    NSInputStream * _stream;
}

@property (nonatomic) Class classOfNextMessage;
@property (nonatomic, readonly) unsigned long long position;

- (void).cxx_destruct;
- (Class)classOfNextMessage;
- (id)initWithStream:(id)arg1;
- (id)nextMessage;
- (unsigned long long)position;
- (void)setClassOfNextMessage:(Class)arg1;

@end
