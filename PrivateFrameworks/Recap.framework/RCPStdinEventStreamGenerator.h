
@interface RCPStdinEventStreamGenerator : NSObject {
    NSMutableArray * _commandBuffer;
    NSInputStream * _stdin;
    NSMutableString * _stringBuffer;
}

- (void).cxx_destruct;
- (bool)_processBuffer;
- (void)dealloc;
- (id)init;
- (id)nextEventStream;

@end
