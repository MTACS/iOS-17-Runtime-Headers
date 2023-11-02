
@interface FCTodayFeedConfigRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _additionalRecordIDs;
    unsigned long long  _feedType;
    NSString * _forYouConfigID;
    NSString * _formatVersion;
}

@property (nonatomic, readonly, copy) NSArray *additionalRecordIDs;
@property (nonatomic, readonly) unsigned long long feedType;
@property (nonatomic, readonly, copy) NSString *forYouConfigID;
@property (nonatomic, readonly, copy) NSString *formatVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalRecordIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feedType;
- (id)forYouConfigID;
- (id)formatVersion;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedType:(unsigned long long)arg1 forYouConfigID:(id)arg2 formatVersion:(id)arg3 additionalRecordIDs:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
