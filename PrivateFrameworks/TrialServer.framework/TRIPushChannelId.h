
@interface TRIPushChannelId : NSObject {
    NSString * _base64ChannelId;
    int  _populationType;
    NSString * _rawIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int populationType;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_base64ChannelIdForIdentifier:(id)arg1 populationType:(int)arg2;
+ (bool)_writeToByte:(char *)arg1 fromHexByteString:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithExperimentId:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithPushChannelId:(id)arg1;
- (id)initWithRolloutDeployment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPushChannelId:(id)arg1;
- (int)populationType;
- (unsigned long long)type;

@end
