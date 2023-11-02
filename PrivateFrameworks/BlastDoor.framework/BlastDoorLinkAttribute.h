
@interface BlastDoorLinkAttribute : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  linkAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSURL *link;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)link;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
