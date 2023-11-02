
@interface SUNavigationHistoryItem : NSObject <NSCopying> {
    NSString * _title;
    SSURLRequestProperties * _urlRequestProperties;
}

@property (nonatomic, readonly) SSURLRequestProperties *URLRequestProperties;
@property (nonatomic, readonly) NSString *title;

- (id)URLRequestProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)title;

@end
