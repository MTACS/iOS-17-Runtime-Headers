
@interface _EDWrappedMessage : NSObject {
    long long  _databaseID;
    EMMessage * _message;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) EMMessage *message;

- (void).cxx_destruct;
- (long long)databaseID;
- (id)initWithMessage:(id)arg1 databaseID:(long long)arg2;
- (id)message;

@end
