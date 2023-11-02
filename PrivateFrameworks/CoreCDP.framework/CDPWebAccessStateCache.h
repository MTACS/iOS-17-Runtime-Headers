
@interface CDPWebAccessStateCache : NSObject {
    bool  _isValid;
    unsigned long long  _webAccessStatus;
}

@property bool isValid;
@property unsigned long long webAccessStatus;

+ (id)sharedInstance;

- (id)init;
- (bool)isValid;
- (void)setIsValid:(bool)arg1;
- (void)setWebAccessStatus:(unsigned long long)arg1;
- (unsigned long long)webAccessStatus;

@end
