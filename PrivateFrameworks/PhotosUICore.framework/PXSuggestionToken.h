
@interface PXSuggestionToken : NSObject {
    bool  _canceled;
    unsigned long long  _token;
}

@property (nonatomic, readonly) bool canceled;
@property (nonatomic) unsigned long long token;

- (void)cancel;
- (bool)canceled;
- (id)init;
- (void)setToken:(unsigned long long)arg1;
- (unsigned long long)token;

@end
