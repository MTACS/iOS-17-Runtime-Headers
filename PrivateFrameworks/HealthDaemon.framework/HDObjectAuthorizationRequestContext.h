
@interface HDObjectAuthorizationRequestContext : NSObject {
    HKObjectAuthorizationPromptSessionMetadata * _metadata;
    bool  _persistSession;
    bool  _promptWithAllSamples;
    bool  _promptWithNoSamples;
    NSArray * _samples;
}

@property (nonatomic, readonly, copy) HKObjectAuthorizationPromptSessionMetadata *metadata;
@property (nonatomic) bool persistSession;
@property (nonatomic) bool promptWithAllSamples;
@property (nonatomic) bool promptWithNoSamples;
@property (nonatomic, readonly, copy) NSArray *samples;

- (void).cxx_destruct;
- (id)initWithSamples:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (bool)persistSession;
- (bool)promptWithAllSamples;
- (bool)promptWithNoSamples;
- (id)samples;
- (void)setPersistSession:(bool)arg1;
- (void)setPromptWithAllSamples:(bool)arg1;
- (void)setPromptWithNoSamples:(bool)arg1;

@end
