
@interface CWFChannel : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding, WFScanableChannel> {
    unsigned long long  _channel;
    unsigned int  _flags;
}

@property (nonatomic, readonly) unsigned int band;
@property (nonatomic) unsigned long long channel;
@property (nonatomic, readonly) unsigned long long channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool is2GHz;
@property (nonatomic, readonly) bool is5GHz;
@property (nonatomic, readonly) bool is6GHz;
@property (nonatomic, readonly) bool is6GHzPSC;
@property (nonatomic, readonly) bool isDFS;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int width;

+ (id)channelWithNumber:(unsigned long long)arg1 band:(unsigned int)arg2 width:(int)arg3;
+ (bool)supportsSecureCoding;

- (id)JSONCompatibleKeyValueMap;
- (unsigned int)band;
- (unsigned long long)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)extAbove;
- (unsigned int)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)is2GHz;
- (bool)is5GHz;
- (bool)is6GHz;
- (bool)is6GHzPSC;
- (bool)isDFS;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;
- (void)setChannel:(unsigned long long)arg1;
- (void)setFlags:(unsigned int)arg1;
- (int)width;

@end
