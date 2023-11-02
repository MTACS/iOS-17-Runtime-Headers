
@interface SKADatabaseStatus : NSObject {
    NSString * _channelIdentifier;
    NSDate * _dateCreated;
    NSDate * _dateExpired;
    NSDate * _datePublished;
    NSDate * _dateReceived;
    NSData * _rawData;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *channelIdentifier;
@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (nonatomic, readonly, copy) NSDate *dateExpired;
@property (nonatomic, readonly, copy) NSDate *datePublished;
@property (nonatomic, readonly, copy) NSDate *dateReceived;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, readonly) NSData *rawData;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)logger;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)dateCreated;
- (id)dateExpired;
- (id)datePublished;
- (id)dateReceived;
- (id)description;
- (id)initWithChannelIdentifier:(id)arg1 dateCreated:(id)arg2 datePublished:(id)arg3 dateReceived:(id)arg4 dateExpired:(id)arg5 rawData:(id)arg6 uniqueIdentifier:(id)arg7;
- (id)initWithCoreDataStatus:(id)arg1;
- (bool)isExpired;
- (id)rawData;
- (id)uniqueIdentifier;

@end
