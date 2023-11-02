
@interface EDReadLaterCloudStorageChangeElement : NSObject {
    NSDate * _displayDate;
    ECAngleBracketIDHash * _messageID;
    NSDate * _readLaterDate;
}

@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageID;
@property (nonatomic, readonly) NSDate *readLaterDate;

- (void).cxx_destruct;
- (id)displayDate;
- (id)initWithMessageID:(id)arg1 readLaterDate:(id)arg2 displayDate:(id)arg3;
- (id)messageID;
- (id)readLaterDate;

@end
