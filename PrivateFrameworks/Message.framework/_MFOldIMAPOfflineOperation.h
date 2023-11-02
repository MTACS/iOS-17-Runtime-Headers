
@interface _MFOldIMAPOfflineOperation : NSObject {
    NSString * _mailboxName;
    int  _operationType;
}

@property (nonatomic, retain) NSString *mailboxName;
@property (nonatomic) int operationType;

+ (id)_createStringFromData:(id)arg1 cursor:(unsigned long long*)arg2;
+ (id)deserializedCopyFromData:(id)arg1 cursor:(unsigned long long*)arg2;

- (void).cxx_destruct;
- (id)mailboxName;
- (int)operationType;
- (void)setMailboxName:(id)arg1;
- (void)setOperationType:(int)arg1;

@end
