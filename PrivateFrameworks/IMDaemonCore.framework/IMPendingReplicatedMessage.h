
@interface IMPendingReplicatedMessage : NSObject {
    NSDate * _date;
    NSString * _messageGUID;
    id /* block */  _releaseBlock;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *messageGUID;
@property (nonatomic, copy) id /* block */ releaseBlock;

- (void).cxx_destruct;
- (id)date;
- (id)messageGUID;
- (id /* block */)releaseBlock;
- (void)setDate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setReleaseBlock:(id /* block */)arg1;

@end
