
@interface HSIOReport : NSObject <NSCopying> {
    NSArray * _channelDescriptions;
    NSDictionary * _reportDictionary;
}

@property (nonatomic, retain) NSArray *channelDescriptions;
@property (nonatomic, retain) NSDictionary *reportDictionary;

+ (id)report:(id*)arg1;
+ (id)reportWithOnlySimpleChannels:(id*)arg1;

- (void).cxx_destruct;
- (id)channelDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithReportDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReport:(id)arg1;
- (id)reportByFilteringChannels:(id /* block */)arg1;
- (id)reportDictionary;
- (id)reportWithOnlySimpleChannels;
- (void)setChannelDescriptions:(id)arg1;
- (void)setReportDictionary:(id)arg1;
- (id)snapshot:(id*)arg1;

@end
