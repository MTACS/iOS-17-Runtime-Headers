
@interface BlastDoorBreadcrumbTextOptionFlagsAttribute : NSObject {
    void breadcrumbTextOptionFlagsAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long optionFlags;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id)description;
- (id)init;
- (unsigned long long)optionFlags;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
