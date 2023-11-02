
@interface SALCMVodViewingContext : SALCMViewingContext

@property (nonatomic, copy) NSDate *originalEventStartTime;

+ (id)vodViewingContext;
+ (id)vodViewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalEventStartTime;
- (void)setOriginalEventStartTime:(id)arg1;

@end
