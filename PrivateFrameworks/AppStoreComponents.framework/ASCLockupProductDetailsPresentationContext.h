
@interface ASCLockupProductDetailsPresentationContext : NSObject {
    long long  _presentationStyle;
}

@property (nonatomic, readonly) long long presentationStyle;

+ (id)defaultPresentationContext;

- (id)initWithPresentationStyle:(long long)arg1;
- (long long)presentationStyle;

@end
