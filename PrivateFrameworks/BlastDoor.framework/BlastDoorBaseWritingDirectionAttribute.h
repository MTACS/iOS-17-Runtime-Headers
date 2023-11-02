
@interface BlastDoorBaseWritingDirectionAttribute : NSObject {
    void baseWritingDirectionAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id)description;
- (long long)direction;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
