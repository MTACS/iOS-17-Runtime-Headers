
@interface _EDPartitionedObjectIDs : NSObject {
    NSArray * _messageObjectIDs;
    NSDictionary * _threadObjectIDsByScope;
}

@property (nonatomic, readonly, copy) NSArray *messageObjectIDs;
@property (nonatomic, readonly, copy) NSDictionary *threadObjectIDsByScope;

- (void).cxx_destruct;
- (id)initWithMessageObjectIDs:(id)arg1 threadObjectIDsByScope:(id)arg2;
- (id)messageObjectIDs;
- (id)threadObjectIDsByScope;

@end
