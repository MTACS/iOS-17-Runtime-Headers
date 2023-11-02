
@interface _SYMessageTimerContext : NSObject {
    NSString * _identifier;
    unsigned long long  _seqno;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long seqno;

- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)seqno;
- (void)setIdentifier:(id)arg1;
- (void)setSeqno:(unsigned long long)arg1;

@end
