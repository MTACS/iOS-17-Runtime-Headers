
@interface PFUBLogEventID : NSObject {
    long long  _eventType;
    long long  _hash;
    NSString * _idString;
}

@property (nonatomic, readonly) long long hash;

+ (void)initialize;

- (long long)hash;
- (id)initWithCustomKey:(id)arg1;
- (id)initWithEventType:(int)arg1;

@end
