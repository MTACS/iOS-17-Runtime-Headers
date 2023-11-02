
@interface RSNodeInput : NSObject {
    <RSNodeInputProducer> * _producer;
}

@property (nonatomic, readonly) RSNodeConnection *connection;
@property (nonatomic) <RSNodeInputProducer> *producer;

+ (id)keyPathsForValuesAffectingConnection;

- (void).cxx_destruct;
- (id)connection;
- (id)producer;
- (void)setProducer:(id)arg1;

@end
