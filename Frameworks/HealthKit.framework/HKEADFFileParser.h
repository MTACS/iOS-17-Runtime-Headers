
@interface HKEADFFileParser : NSObject {
    NSData * _data;
}

@property (nonatomic, retain) NSData *data;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void).cxx_destruct;
- (void)_enumerateHeadersWithHandler:(id /* block */)arg1;
- (id)data;
- (void)enumerateChannelsWithHandler:(id /* block */)arg1;
- (id)initWithData:(id)arg1;
- (id)newBuilderWithStartDate:(id)arg1;
- (id)payloadInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)initWithDataFileName:(id)arg1;

@end
