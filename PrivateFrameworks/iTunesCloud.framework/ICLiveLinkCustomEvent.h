
@interface ICLiveLinkCustomEvent : NSObject {
    NSString * _localizedMessage;
}

@property (nonatomic, readonly, copy) NSString *localizedMessage;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedMessage:(id)arg1;
- (id)localizedMessage;

@end
