
@interface EventStreamWrapper : NSObject {
    struct __FSEventStream { } * _stream;
}

@property (nonatomic) struct __FSEventStream { }*stream;

- (void)setStream:(struct __FSEventStream { }*)arg1;
- (struct __FSEventStream { }*)stream;

@end
