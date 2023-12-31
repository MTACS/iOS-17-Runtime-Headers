
@interface NSFileAccessIntent : NSObject {
    bool  _isRead;
    long long  _options;
    NSURL * _url;
}

@property (copy) NSURL *URL;
@property (readonly) bool isRead;
@property (readonly) unsigned long long readingOptions;
@property (readonly) unsigned long long writingOptions;

+ (id)readingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;
+ (id)writingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;

- (id)URL;
- (void)dealloc;
- (id)description;
- (bool)isRead;
- (unsigned long long)readingOptions;
- (void)setURL:(id)arg1;
- (unsigned long long)writingOptions;

@end
