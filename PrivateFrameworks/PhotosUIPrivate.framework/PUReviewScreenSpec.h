
@interface PUReviewScreenSpec : NSObject {
    bool  _allowSendButton;
    unsigned long long  _oneUpOptions;
    unsigned long long  _options;
}

@property (nonatomic, readonly) bool allowSendButton;
@property (nonatomic, readonly) unsigned long long oneUpOptions;
@property (nonatomic, readonly) unsigned long long options;

- (bool)allowSendButton;
- (id)initWithOptions:(unsigned long long)arg1;
- (unsigned long long)oneUpOptions;
- (unsigned long long)options;

@end
