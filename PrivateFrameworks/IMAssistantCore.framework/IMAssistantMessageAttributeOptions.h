
@interface IMAssistantMessageAttributeOptions : NSObject {
    unsigned long long  _attributes;
}

@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic, readonly) bool includeRead;
@property (nonatomic, readonly) bool includeUnread;

+ (id)optionsWithAttributes:(unsigned long long)arg1;
+ (id)optionsWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2;

- (unsigned long long)attributes;
- (bool)includeRead;
- (bool)includeUnread;
- (id)initWithAttributes:(unsigned long long)arg1;
- (id)initWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2;

@end
