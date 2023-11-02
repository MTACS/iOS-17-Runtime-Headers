
@interface PUOneUpAssetSuggestionInfo : NSObject {
    PXContextualNotification * _contextualNotification;
    NSProgress * _progress;
    long long  _state;
}

@property (nonatomic, retain) PXContextualNotification *contextualNotification;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)contextualNotification;
- (id)progress;
- (void)setContextualNotification:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
