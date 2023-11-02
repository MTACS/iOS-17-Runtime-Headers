
@interface _MFIMAPCommandParameters : NSObject {
    NSArray * _arguments;
    int  _command;
    MFIMAPResponseConsumer * _responseConsumer;
    unsigned long long  _sequenceNumber;
    NSMutableArray * _untaggedResponses;
}

@property (nonatomic, retain) NSArray *arguments;
@property (nonatomic) int command;
@property (nonatomic, retain) MFIMAPResponseConsumer *responseConsumer;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSMutableArray *untaggedResponses;

- (void).cxx_destruct;
- (id)arguments;
- (int)command;
- (id)initWithCommand:(int)arg1;
- (id)initWithCommand:(int)arg1 arguments:(id)arg2;
- (id)initWithCommand:(int)arg1 sequenceNumber:(unsigned long long)arg2;
- (id)responseConsumer;
- (unsigned long long)sequenceNumber;
- (void)setArguments:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setResponseConsumer:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setUntaggedResponses:(id)arg1;
- (id)untaggedResponses;

@end
