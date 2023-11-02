
@interface BlastDoorMessagePartAttribute : NSObject {
    void messagePartAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long partNumber;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id)description;
- (id)init;
- (unsigned long long)partNumber;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
