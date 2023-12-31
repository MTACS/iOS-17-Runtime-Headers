
@interface HSIORSample : NSObject <HSIOSimpleReporting, NSCopying> {
    HSIORChannelDescription * _channelDescription;
    NSNumber * _count;
}

@property (nonatomic, readonly) <HSIOReporting> *channel;
@property (nonatomic, retain) HSIORChannelDescription *channelDescription;
@property (nonatomic, retain) NSNumber *count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)channel;
- (id)channelDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)count;
- (unsigned long long)hash;
- (id)initWithIOReportSampleRef:(struct __CFDictionary { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSample:(id)arg1;
- (void)setChannelDescription:(id)arg1;
- (void)setCount:(id)arg1;

@end
