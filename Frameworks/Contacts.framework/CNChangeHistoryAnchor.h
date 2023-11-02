
@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding> {
    long long  _changeRecordID;
    long long  _sequenceNumber;
    long long  _version;
}

@property (nonatomic, readonly) long long changeRecordID;
@property (nonatomic, readonly) NSData *historyToken;
@property (nonatomic, readonly) long long sequenceNumber;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (long long)changeRecordID;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)historyToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistoryToken:(id)arg1 error:(id*)arg2;
- (id)initWithSequenceNumber:(long long)arg1;
- (id)initWithSequenceNumber:(long long)arg1 changeRecordID:(long long)arg2;
- (long long)sequenceNumber;
- (long long)version;

@end
