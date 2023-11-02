
@interface NRDeviceCollectionHistoryEntry : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NRDeviceCollectionDiff * _diff;
    NRDeviceCollectionHistory * _historyManager;
    unsigned long long  _index;
    unsigned int  _switchIndex;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NRDeviceCollectionDiff *diff;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NRPBDeviceCollectionHistoryEntry *protobuf;
@property (nonatomic, readonly) NRMutableDeviceCollection *state;
@property (nonatomic, readonly) unsigned int switchIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)diff;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned int)arg5;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (id)state;
- (unsigned int)switchIndex;

@end
