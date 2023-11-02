
@interface PKApplicationMessageNodeTerminal : PKApplicationMessageNode {
    PKApplicationMessage * _message;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) PKApplicationMessage *message;

- (void).cxx_destruct;
- (id)message;

@end
