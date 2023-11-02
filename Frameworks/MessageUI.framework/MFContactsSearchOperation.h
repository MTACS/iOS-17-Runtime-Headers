
@interface MFContactsSearchOperation : NSOperation {
    MFContactsSearchManager * _owner;
    NSString * _sendingAddress;
    NSNumber * _taskID;
    NSString * _text;
}

@property (nonatomic, readonly) MFContactsSearchManager *owner;
@property (nonatomic, readonly) NSString *sendingAddress;
@property (nonatomic, readonly) NSNumber *taskID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long type;

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3;

- (void).cxx_destruct;
- (id)owner;
- (id)sendingAddress;
- (id)taskID;
- (id)text;
- (unsigned long long)type;

@end
