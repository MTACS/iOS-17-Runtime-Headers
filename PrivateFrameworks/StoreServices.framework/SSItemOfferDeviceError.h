
@interface SSItemOfferDeviceError : NSObject {
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    NSString * _localizedURLTitle;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *localizedMessage;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedURLTitle;

- (id)URL;
- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;
- (void)dealloc;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)localizedURLTitle;

@end
