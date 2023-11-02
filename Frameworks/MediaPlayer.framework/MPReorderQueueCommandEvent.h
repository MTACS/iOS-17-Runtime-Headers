
@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent {
    long long  _destinationOffset;
    NSString * _insertAfterContextItemID;
    NSString * _insertBeforeContextItemID;
}

@property (nonatomic, readonly) long long destinationOffset;
@property (nonatomic, readonly) NSString *insertAfterContextItemID;
@property (nonatomic, readonly) NSString *insertBeforeContextItemID;

- (void).cxx_destruct;
- (long long)destinationOffset;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)insertAfterContextItemID;
- (id)insertBeforeContextItemID;

@end
