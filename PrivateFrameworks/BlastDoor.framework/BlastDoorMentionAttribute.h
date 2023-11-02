
@interface BlastDoorMentionAttribute : NSObject {
    void mentionAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *uri;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)uri;

@end
