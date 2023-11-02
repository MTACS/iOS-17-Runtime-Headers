
@interface RSNodeOutput : NSObject {
    <RSNodeOutputConsumer> * _consumer;
}

@property (nonatomic, readonly) RSNodeConnection *connection;
@property (nonatomic, retain) <RSNodeOutputConsumer> *consumer;

+ (id)keyPathsForValuesAffectingConnection;

- (void).cxx_destruct;
- (id)connection;
- (id)consumer;
- (void)emitMessage:(id)arg1;
- (void)setConsumer:(id)arg1;

@end
